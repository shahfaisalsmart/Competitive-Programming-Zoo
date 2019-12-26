//AUTHOR:: MOHAMMAD FAISAL
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// ATCODER Beginner Problems
//#include<bits/stdc++.h>
#include<iostream>
#include<tuple>
#include<bitset>
#include<string>
#include<algorithm>
#include <cctype>
#include<unordered_map>
#include<map>
#include<set>
#include<vector>
#include<utility>
#include<iterator>
using namespace std;
//string password;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
bool isVowel(char c)
{
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}
bool isPrime(long long n)
{
  if (n == 1)
  {
    return false;
  }
  long long int i = 2;
  while (i*i <= n)
  {
      if (n % i == 0)
      {
          return false;
      }
      i += 1;
  }
  return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.flush();
    int n;
    cin >>n;
    vector<tuple<string,int,int> > lis;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin >> s;
        int sc;
        cin >> sc;
        lis.push_back(make_tuple(s,-sc,i));
    }
    sort(lis.begin(),lis.end());
    for(int i=0;i<(int)lis.size();i++)
        cout<<get<2>(lis[i])<<endl;
    return 0;
}
