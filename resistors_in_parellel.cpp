// Author: Mohammad Faisal
/*
    
  AtCoder Beginner Contest 138
  DATED: 18-AUG-2019
*/
#include<iostream>
using namespace std;
 
int main()
{
  int n;
  cin >> n;
  double ans =0;
  for(int i=0;i<n;i++)
  {
    double x;
    cin >> x;
    ans +=(1/x);
  }
  
  ans = (1/ans);
  cout<<ans<<endl;
  return 0;
}
