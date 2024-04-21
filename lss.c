//longest sub sequence using recursion
#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int dp[MAX_LEN + 1][MAX_LEN + 1];
int n, m;

int longestCommonSubsequence(char *text1, char *text2, int i, int j) {
    if (i == 0 || j == 0) {
        return 0;
    }
    
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    
    if (text1[i - 1] == text2[j - 1]) {
        dp[i][j] = 1 + longestCommonSubsequence(text1, text2, i - 1, j - 1);
    } else {
        int lcs1 = longestCommonSubsequence(text1, text2, i - 1, j);
        int lcs2 = longestCommonSubsequence(text1, text2, i, j - 1);
        dp[i][j] = (lcs1 > lcs2) ? lcs1 : lcs2;
    }
    
    return dp[i][j];
}

int main() {
    char text1[] = "abcde";
    char text2[] = "ace";
    
    n = strlen(text1);
    m = strlen(text2);
    
    memset(dp, -1, sizeof(dp));
    
    int lcsLength = longestCommonSubsequence(text1, text2, n, m);
    printf("%d\n", lcsLength);
    
    return 0;
}

//using tabulization or say  iterative approach
#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int dp[MAX_LEN + 1][MAX_LEN + 1];
int n, m;

int longestCommonSubsequence(char *text1, char *text2) {
    n = strlen(text1);
    m = strlen(text2);
    
    memset(dp, 0, sizeof(dp));
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (text1[i - 1] == text2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = (dp[i - 1][j] > dp[i][j - 1]) ? dp[i - 1][j] : dp[i][j - 1];
            }
        }
    }
    
    return dp[n][m];
}

int main() {
    char text1[] = "abcde";
    char text2[] = "ace";
    
    int lcsLength = longestCommonSubsequence(text1, text2);
    printf("%d\n", lcsLength);
    
    return 0;
}

