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
    
    int temp =0;
    int count=1;
    
    for(int i=1;i<n;i++)
    {
        if(count==0){
            count=1;
        temp = i;
        }
        if(arr[i]==arr[temp])
        {
            count++;
        }
        else if(arr[i]!=arr[temp])
        {
            count--;
        }
    }
    
    int res =0;
    for(int i=0;i<n;i++)
    {
        if(arr[temp]==arr[i])
        {
            res++;
        }
    }
    (res > (n>>1)) ? cout<<"Banal": cout<<"Interesting";
        
    return 0;
	// Write your code here
}
