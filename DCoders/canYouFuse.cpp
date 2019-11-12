// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
#include<bits/stdc++.h>
using namespace std;
int solve(string a, string b) {
    int table[256] = {0};
    int result = 0;
    int len1 = a.length();
    int len2 = b.length();
    for (int i=0;i<len1 ; i++)table[a[i]]++;
    for (int j=0;j<len2; j++)result += (table[b[j]]-- > 0);
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int k;
    cin >> k;
    string x;
    cin >> x;
    string y;
    cin >> y;
    int re = solve(x,y);
    (re>=k) ? cout<<"YES": cout<<"NO";
    return 0;
}
