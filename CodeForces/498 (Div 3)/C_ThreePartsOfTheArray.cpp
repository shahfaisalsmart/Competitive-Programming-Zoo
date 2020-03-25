// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL

// Link: https://codeforces.com/contest/1006

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
    ll * arr = new ll[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    ll * pre = new ll[n];
    ll * suff = new ll[n];
 
    pre[0] = arr[0];
    for(int i=1;i<n;i++)
        pre[i] = pre[i-1] + arr[i];
    
    suff[0] = arr[n-1];
    for(int i=1;i<n;i++)
    {
        suff[i] = suff[i-1] + arr[n-i-1];
    }
 
 
    ll mid = (pre[n-1] >> 1);
 
    vector<ll> v;
    for(int i=0;pre[i]<=mid;i++)
    	v.push_back(pre[i]);
    for(int i=0;suff[i]<=mid;i++)
    	v.push_back(suff[i]);
    
    sort(v.begin(),v.end());
    
 
    ll sum =0;
    int len = (int)v.size();
    for(int i=len-2;i>=0;i--)
    	if(v[i]==v[i+1] && v[i]+v[i+1]<=pre[n-1])
    		{sum = v[i];break;}
	cout<<sum<<endl;
	delete[] pre;
	delete[] suff;
	delete[] arr;
	v.clear();
    return 0;
}
