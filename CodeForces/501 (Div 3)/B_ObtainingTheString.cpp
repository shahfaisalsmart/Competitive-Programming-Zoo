// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    string s,t;
    cin >> s >> t;
    vector<int> v;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==t[i])
            continue;
        int pos = -1;
        for(int j=i+1;j<n;j++)
        {
            if(s[j]==t[i])
            {
                pos = j;
                break;
            }
        }
        if(pos==-1)
        {
            cout<<"-1"<<endl;
            return 0;
        }
        for(int j = pos-1; j>=i; j--)
        {
            v.push_back(j);
            swap(s[j],s[j+1]);
        }
    }
 
    cout<<v.size()<<endl;
    vector<int>:: iterator it;
    for(it=v.begin();it!=v.end();it++)
        cout<<(*it+1)<<" ";
    // ALLAH HAFIZ
    return 0;
}
