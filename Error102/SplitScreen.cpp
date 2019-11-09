// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;
char dp[5][80];

int ab(int x)
{
    return x<0 ? -x:x;
}
void solve(char x, int ch, char y)
{
    dp[2][ch] = x;
    for(int r = -2; r<=2; r++)
        for(int c = -2;c<=2;c++)
            if(ab(r)+ab(c)==2)
                dp[2+r][ch+c] = y;
}
int main(void) {
    string s;
    // int n = s.length();
    cin >> s;
    int n = s.length();
    for(int r = 0; r<5; r++)
        for(int c = 0 ; c<=4*n; c++)
            dp[r][c] = '.';
    
    for(int i=0;i<n;i++)
        solve(s[i],4*i+2,'#');
    
    for(int i=2;i<n;i+=3)
        solve(s[i],4*i+2,'*');
    
    for(int r=0;r<5;++r)
        cout<<dp[r]<<endl;
    return 0;
	// Write your code here
}
