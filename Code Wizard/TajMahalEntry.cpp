// Author: Mohammad Faisal
// BEGINNING WITH NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    long long * arr = new long long [n+1];
    long long * ans = new long long [n+1];
    
    for(int i=1;i<=n;i++)
    {
        cin >> arr[i];
        arr[i] -= i-1;
        if (arr[i]<0)
            arr[i]=0;
        long long temp = arr[i]/n;
        
        if(arr[i]%n!=0)
            temp+=1;
        ans[i] = (n*temp)+i;
    }
    long long Max = INT_MAX;
    long long ind = -1;
    
    for(int i=1; i<=n;i++)
    {
        if(ans[i]<Max){
            Max = ans[i];
            ind = i;}
            
    }
    cout<<ind<<endl;
	return 0;
}
