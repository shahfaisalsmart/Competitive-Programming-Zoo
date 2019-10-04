// Author: Mohammad Faisal
// Email: mohammadfaisal78612@gmail.com
// 997. Find the Town Judge
// Beginning with the name of Almighty GOD ALLAH.
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        if(trust.size()==0)
            return 1;
        int * table = new int[n+1];
        // memset(table,0,sizeof(table));
        for(int i=1;i<=n;i++) table[i]=0;
        for(int i=0;i<trust.size();i++)
        {
           table[trust[i][0]]--;
           table[trust[i][1]]++;
        }
        int ind=1;
        int max = table[1];
        for(int i=2;i<=n;i++)
        {
         if(max<table[i])
            {
                max = table[i];
                ind = i;
            }
        }
        // return ind;
        return (max==n-1) ? ind: -1 ;
    }
};
