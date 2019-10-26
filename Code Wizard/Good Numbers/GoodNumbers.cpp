// Author:: Mohammad Faisal
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int a,b;
    cin >> a >> b;
    int m = b+1;
    int * arr = new int[m];
    
    for(int d=1;d<m;++d)
    {
        int dd = d+d;
        while(dd<m)
        {
            arr[dd]+=d;
            dd+=d;
        }
    }
    long s = 0;
    for(int i=a;i<=b;i++)
        s+=abs(arr[i]-i);
    
    cout<<s<<endl;
    return 0;
	// Write your code here
}
