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
    ll n;
    int k;
    long long int s;
    cin >> n >> k >> s;
    ll currHouse = 1;
    if(k > s || k*(n-1) < s)
        cout<<"NO";
    else
    {
    	vector<int>v;
        while(k)
        {
            ll temp = min(n-1, s-k+1);
            s-=temp;
            k--;
            currHouse = currHouse-temp > 0 ? currHouse-temp: currHouse+temp;
            v.push_back(currHouse);
        }
        cout<<"YES"<<endl;
        for(auto &k: v)
        	cout<<k<<" ";
    }
    return 0;
}
