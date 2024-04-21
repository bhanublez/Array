//0/1 knap sack using dp
#include <stdio.h>

#define MAX_ITEMS 100
#define MAX_CAPACITY 1000

struct Item {
    int weight;
    int value;
};

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int capacity, struct Item items[], int n) {
    int dp[MAX_ITEMS + 1][MAX_CAPACITY + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (items[i - 1].weight <= w) {
                dp[i][w] = max(items[i - 1].value + dp[i - 1][w - items[i - 1].weight], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][capacity];
}

int main() {
    int capacity = 50;
    struct Item items[] = {
        {10, 60},
        {20, 100},
        {30, 120}
    };
    int n = sizeof(items) / sizeof(items[0]);

    int maxValue = knapsack(capacity, items, n);
    printf("%d\n", maxValue);

    return 0;
}
