// AUTHOR:: MOHAMMAD FAISAL
// BEGINNING WITH THE BAME OF ALMIGHTY GOD ALLHA
#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    int n;
    cin >> n;
    
    int arr[n+1][n+1];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin >> arr[i][j];
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i&1)
            {
                cout<<arr[j][i]<<" ";
            }
            else
            {
                cout<<arr[n-j+1][i]<<" ";
            }
        }
    }
    return 0;    
}
