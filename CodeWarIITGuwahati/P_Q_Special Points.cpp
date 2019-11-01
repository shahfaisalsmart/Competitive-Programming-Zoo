// Author:: MOHAMMAD FAISAL
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long long n,m,a,b;
    cin >> n >> m >> a >> b;
    
    vector<vector<long long> > graph(n+1),comp;
    
    for(long long i=0;i<m;i++)
    {
        long long x,y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    vector<bool>visited(n+1,false);
    
    for(int i=1;i<=n;i++)
    {
        if(!visited[i]){
            vector<long long> cc;
            queue<long long> q;
            q.push(i);
            visited[i] = true;
            while(!q.empty())
            {
                long long cur = q.front();
                cc.push_back(graph[cur].size());
                q.pop();
                for(long long j: graph[cur])
                {
                    if((!visited[j]))
                    {
                        visited[j]=true;
                        q.push(j);
                    }
                }
            }
            comp.push_back(cc);
       }
    }
    long long ans =0;
    for(auto &cc: comp)
    {
        long long e = *min_element(cc.begin(),cc.end());
        long long f = *max_element(cc.begin(),cc.end());
    for(long long i: cc)
    {
        if((long long)a*e<i && (long long)b*f > i)
        {ans++;}
    }
    }
    cout<<ans;
    return 0;
}
