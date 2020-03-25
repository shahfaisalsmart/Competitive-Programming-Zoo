// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    ll val;
    cin >> val;
    ll rsum=0;
    ll lsum=0;
    vector<ll> diff;
    while(n--)
    {
        ll a,b;cin >> a >> b;
        rsum+=b;
        lsum+=a;
        diff.push_back(a-b);
    }
    if(rsum > val)
    {
        cout<<"-1";
    }
    else if(lsum<= val)
    {
        cout<<"0";
    }
    else
    {
        ll target = lsum-val;
        sort(diff.begin(),diff.end());
        reverse(diff.begin(),diff.end());
        int move = 0;
        for(int i=0; i<(int)diff.size();i++)
        {
            if(target <=0)
                break;
            target-=diff[i];
            ++move;
        }
        cout<<move<<endl;
    }
    return 0;
}
