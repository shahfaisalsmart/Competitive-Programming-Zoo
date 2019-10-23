// Author: Mohammad Faisal
// BEGINNIG WITH THE NAME OF ALMIGHTY GOD ALLAH SUBHANA-WATA-ALLAH
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n,x,y;
    cin >> n >> x >> y;
    
    string s;
    cin >> s;
    
    long long count=0;
    long long res = INT_MAX;

    string t="";
    
    t+=s[0];
    
    if(s[0]=='0')
    {
        count++;
    }
    
    for(int i=1;i<n;i++)
    {
        char c = s[i], d = s[i-1];
        if(c!=d)
        {
            t+=c;
            if(c=='0')
            {
                count++;
            }
        }
    }
    
    if(count==0)
    {
        res =0;
    }
    else if(x<y)
    {
        res = x*(count-1)+y;
    }
    else
    {
        res = count*y;
    }
    
    cout<<res<<endl;
	return 0;
}
