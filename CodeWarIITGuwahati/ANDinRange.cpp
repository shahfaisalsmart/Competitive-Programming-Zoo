// Author:: Mohammad Faisal
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
using namespace std;
int range(int m, int n) {
    int x = 0;
    while ((m|x) < n)
       x = (x<<1) | 1;

    return m & ~x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >>t ;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        int res = range(a,b);
        cout<<res<<endl;
    }
    return 0;
}
