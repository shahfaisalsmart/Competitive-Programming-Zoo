// Author:: MOHAMMAD FAISAL
// Email:: mohammad.faisal78612@gmail.com
// BEGINNIG WITH NAME OF ALMIGHTY GOD ALLAH SUBHANA-WATA-ALLAH
#include<bits/stdc++.h>
using namespace std;
struct Nim
{
    long long x,y,t;
    
}a[1000005];
    
bool operator < (Nim X, Nim Y)
{
        if(X.t==Y.t)
        {
            if(X.y==Y.y)
            {
                return X.x < Y.x;
            }
            return X.y > Y.y;
        }
        return X.t < Y.t;
}

int main() {

	// Write your code here
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
        
    long long n,d;
    cin >> n >> d;
    
    for(long long i=0;i<n;i++)
    {
        cin >> a[i].t >> a[i].x >> a[i].y;
    
    }
    sort(a,a+n);
    
    long long go = 0;
    long long rupee = 0;
    long long paint =0;
    long long m=0;
    
    for(long long i=0;i<n;i++)
    {
        if(a[i].y > go)
        {
            paint+= go*(a[i].t - m);
            if(paint >= d)
            {
                break;
            }
            m = a[i].t;
            rupee+= a[i].x;
            go = a[i].y;
        }
    }
    cout<<rupee<<endl;
    
    
}
