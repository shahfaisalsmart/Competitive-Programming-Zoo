//BEGINNING WITH NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
#include<bits/stdc++.h>
using namespace std;
stack<pair<int,int> > s;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin >> n;
    
    long long res =0;
    for(long long i=0; i<n;i++)
    {
        int h;
        cin>> h;
        
        pair<int,int> p(h,1);
        
        for(; !s.empty() && s.top().first <= h; s.pop() )
        {
            res+= s.top().second;
            
            if(s.top().first == h)
                p.second += s.top().second;   
        }
        if(!s.empty())
            res++;
     
        s.push(p); 
    }// Write your code here
    cout<<res;
    return 0;
}
