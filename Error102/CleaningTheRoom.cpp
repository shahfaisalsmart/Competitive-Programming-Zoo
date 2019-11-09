// BEGINNING WITH THE NAME OF ALMIGHTY GOD
// AUTHOR:: MOHAMMAD FAISAL
#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    
    int n,w,h,k;
    cin >> n >> w >> h;
    
    for(int i=0;i<n;i++)
    {
        cin >> k;
        (w*w+h*h >= k*k) ? cout<<"DA": cout<<"NE";
        cout<<endl;
    }
}
