// AUTHOR:: MOHAMMAD FAISAL
// BEGINNING WITH THE NAME OF ALMIGHTY GOD 
#include<stdio.h>
#include<cstdio>
#define maxk 10001
#define mod 1000000007

int n,k,dp[2][maxk];
int main(void)
{
    scanf("%d%d",&n,&k);
    dp[1][0] = 1;
    
    for(int i=2;i<=n;i++)
    {
        int temp = 0;
        for(int j=0;j<=k;j++)
        {
            temp = (temp+dp[(i-1)&1][j])%mod;
            if(j>=i) temp = (temp-dp[(i-1)&1][j-i]+mod)%mod;
            dp[i&1][j] = temp;
        }
    }
    printf("%d\n",dp[n&1][k]);
    return 0;
}
