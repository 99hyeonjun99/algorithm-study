#include <stdio.h>
int main()
{
    int n, dp[1005], i;
    scanf("%d",&n);
    dp[1] = 1;
    dp[2] = 3;
    for(i=3; i<=n; i++) {
        dp[i] = (dp[i-1] + dp[i-2]*2)%10007;
    }
    printf("%d\n",dp[n]);
    return 0;
}
