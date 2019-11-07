// Author:: Mohammad Faisal
// Email:: mohammad.faisal78612@gmail.com
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    
    long long n;
    cin >> n;
    vector<pair<long long , long long> > res;
    for(long long i=0;i<=n;i++)
    {
        long long x = n^i;
        res.push_back(make_pair(x,i));
    }
    sort(res.rbegin(),res.rend());
    cout<<n<<" "<<res[0].second;
    return 0;
	// Write your code here
}
