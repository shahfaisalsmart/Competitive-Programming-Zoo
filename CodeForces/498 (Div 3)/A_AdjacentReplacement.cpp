// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
// link: https://codeforces.com/contest/1006

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin >> x;
        (x&1) ? cout<<x: cout<<x-1;
        cout<<" ";
    }
    return 0;
}
