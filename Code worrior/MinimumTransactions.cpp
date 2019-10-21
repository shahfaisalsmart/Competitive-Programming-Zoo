// Author:: Mohammad Faisal
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
using namespace std;

int solve(int arr[] , int n) 
{ 
	
	vector<pair<int,int>> vec(n); 
	
	for(int i=0;i<n;i++) 
	{ 
		vec[i].first=arr[i]; 
		vec[i].second=i; 
	} 

	sort(vec.begin(),vec.end()); 

	int ans=0,c=0,j; 

	for(int i=0;i<n;i++) 
	{ 
		
		if(vec[i].second==i) 
			continue; 
		else
		{ 
		
			swap(vec[i].first,vec[vec[i].second].first); 
			swap(vec[i].second,vec[vec[i].second].second); 
		} 
		

		if(i!=vec[i].second) 
			--i; 
		
		ans++; 
	} 

	return ans; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    cout<<solve(arr,n);
    return 0;
}
