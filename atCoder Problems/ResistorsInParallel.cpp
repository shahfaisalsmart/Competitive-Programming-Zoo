// Author: Mohammad Faisal
// BEGINNING WITH THE NAME OF ALIMIGHTY GOD ALLAH
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
