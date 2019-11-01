// AUTHOR:: MOHAMMAD FAISAL
// BEGINNING WITH THE NAME OF ALMIGHTY GOD 
#include<bits/stdc++.h>
using namespace std;
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    
    // Write your code here
    int n,m;
    cin >> n >> m;
    int pos=0,maxi=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        if((x+m-1)/m >= maxi)
        {
            pos = i;
            maxi = (x+m-1)/m;
        }
    }
    cout<<pos+1<<endl;
    return 0;
}
