// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL

// Link: https://codeforces.com/contest/1006

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<pair<int,int>> lis1;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        lis1.push_back(make_pair(x,i));
    }
    sort(lis1.begin(),lis1.end());
    reverse(lis1.begin(),lis1.end());
    int profit = 0;
    for(int i=0;i<k;i++)
        profit+=lis1[i].first;
    
    cout<<profit<<endl;
 
    vector<int> pos;
    for(int i=0;i<k;i++)
        pos.push_back(lis1[i].second);
    
    sort(pos.begin(),pos.end());
    
	if(k==1)
		cout<<n<<endl;
	else{
    for(int i=0;i<k;i++)
    {
        if(i==0)
            cout<<pos[0]<<" ";
        else if(i==k-1)
            cout<<n-pos[(int)pos.size()-2];
        else    
            cout<<pos[i]-pos[i-1]<<" ";
    }
	}
    return 0;
}
