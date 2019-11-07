// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
#include<bits/stdc++.h>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin >> n;
    int one=0,two=0;
    
    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        if(x%3==1) one++;
        if(x%3==2) two++;
    }
    if(one%2==0 && two%2==0)
        cout<<"Aahad";
    else
        cout<<"Harshit";
	// Write your code here
    return 0;
}
