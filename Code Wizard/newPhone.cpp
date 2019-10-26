// Author:: Mohammad faisal
// Email:: mohammad.faisal78612@gmail.com
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
using namespace std;
int n;
vector<string> v;

int mob[] = {0,3,3,3,3,3,4,3,4};

char set_digit(char x)
{
    int curr = 0;
    int t = x-'a'+1;
    
    while(t>0)
    {
        t-=mob[curr++];
    }
    return curr+'0';
}
int main() {

    cin >> n;
    
    for(int i=0;i<n;i++)
    {
        string p;
        cin >> p;
        for(auto &x: p)
        {
            x=set_digit(x);
        }
        v.push_back(p);
    }
    
    string s;
    cin >> s;
    int ans = 0;
    for(auto r: v)
    {
        ans+= s==r;
    
    }
    cout<<ans<<endl;
    return 0;
	// Write your code here
}
