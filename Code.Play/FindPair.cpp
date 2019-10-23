// Author:: Mohammad Faisal
// Email:: mohammad.faisal78612@gmail.com
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {

        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n;
        cin >> n;
        int * arr = new int[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
    
        int target;
        cin >> target;
    
        sort(arr,arr+n);
    
        int first = 0;
        int second = 1;
     
        // bool ok = false;
    
        while(first<n && second<n)
        {
            int comp = arr[second]-arr[first];
            
            if(comp>target)
            {
                first++;
            }
            else if(comp < target)
            {
                second++;
            }
            else
            {
                if(first!=second)
                {
                    cout<<"true";
                    return 0;
                }
            }
        }
        cout<<"false";
        return 0;
	// Write your code here
}
