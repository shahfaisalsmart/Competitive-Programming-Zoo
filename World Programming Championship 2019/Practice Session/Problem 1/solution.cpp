// BEGINNING WITH THE NAME OF ALMIGHTY OF GOD
// Author:: MOHAMMAD FAISAL

#include<bits/stdc++.h>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    // vector<int> arr;
    int * arr = new int[9];
    int sum=0;
    
    for(int i=0;i<9;i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<9;j++)
        {
            if(sum-arr[i]-arr[j]==100)
            {
                for(int k=0;k<9;k++)
                {
                    if(k!=i && k!=j)
                        cout<<arr[k]<<endl;
                }
            }
        }
    }

    return 0;
	// Write your code here
}
