// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// Beginning with the name of Almighty God ALLAH.
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> ans;
        for(vector<int>::iterator it = A.begin();it!=A.end();it++)
        {
            if((*it)%2==0)
                ans.push_back((*it));
        }
       for(vector<int>::iterator it = A.begin();it!=A.end();it++)
        {
            if((*it)%2!=0)
                ans.push_back((*it));
        }
        return ans;
    }
};
