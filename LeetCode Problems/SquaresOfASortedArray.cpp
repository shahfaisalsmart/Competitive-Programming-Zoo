// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// 977. Squares of a Sorted Array
// Begining with the Almighty God ALLAH.
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        
        vector<int> ans;
        for(int a: A)
            ans.push_back(a*a);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
