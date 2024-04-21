#include <stdio.h>
#include <string.h>
#define max 100
// int dp[max][max];

int subset(int arr[],int n,int sum){
    int dp[n+1][sum+1];
    //condtion sum=0
    for(int i=0;i<=n;i++){
        dp[i][0]=1;//true
    }
    
    //jab sum>0 and i==0
    for(int i=1;i<=sum;i++){
        dp[0][i]=0;//false
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            dp[i][j]=dp[i-1][j];//arr[i]>sum
            if(j>=arr[i-1]){
                dp[i][j]=dp[i-1][j] | dp[i-1][j-arr[i-1]];
            }
        }
    }
    return dp[n][sum];
}
int main()
{
    int arr[]={6,3,2,1};
    int n=subset(arr,4,5);
    printf("%d",n);

    return 0;
}
