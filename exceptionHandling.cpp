// Author: Mohammad Faisal
/*
  Atcoder Beginner Contest #134
  C - Exception Handling
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int * arr = new int[n];
	
	vector<int> dup;
	for(int i=0;i<n;i++)
	{	
		cin >> arr[i];
		dup.push_back(arr[i]);
	}
	
	sort(dup.rbegin(),dup.rend());
	
	for(int i=0;i<n;i++)
	{
		if(arr[i] == dup[0])
			cout<<dup[1]<<endl;
		else
			cout<<dup[0]<<endl;
	}
	return 0;
}
