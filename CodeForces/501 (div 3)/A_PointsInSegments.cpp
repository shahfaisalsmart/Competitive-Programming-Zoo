// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int q,n;
    cin >> q >> n;
 
    int* arr = new int[101];
    for(int i=1;i<=100;i++)
    	arr[i] = 0;
 
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        for(int i=l; i<=r; i++)
            arr[i] = 1;
    }
    bool flag = true;
    vector<int> v;
    for(int i=1;i<=n;i++)
        if(arr[i]==0)
            flag = false, v.push_back(i);
 
    if(flag)
    {
        cout<<"0"<<endl;
    }
    else{
        cout<<v.size()<<endl;
        vector<int>::iterator it;
        for(it = v.begin();it!=v.end();it++)
            cout<<(*it)<<" ";
    }
    delete[] arr;
    v.clear();
    return 0;
}
