// Author: Mohammad Faisal
// Beginning with the name of Almighty God ALLAH.
// Email: mohammad.faisal78612@gmail.com
// LeetCode : 922. Sort Array By Parity II
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        
        vector<int> lis1,lis2,res(A);
        vector<int> :: iterator it;
        for(it=A.begin();it!=A.end(); it++)
            ((*it)&1) ? lis2.push_back(*it): lis1.push_back(*it);
        
        for(int i=0;i<A.size();i+=2)
        {
            res[i] = lis1.back();
            lis1.pop_back();
        }
        for(int i=1;i<A.size();i+=2)
        {
            res[i] = lis2.back();
            lis2.pop_back();
        }
        lis1.clear();
        lis2.clear();
        return res;
    }
    
};
