// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// LeetCode: 867. Transpose Matrix
// beginning with the name of Almighty God ALLAH.
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int> > ans(A[0].size(),vector<int>(A.size(),0));
        for(int i=0; i<A.size();++i) {
            for(int j=0;j<A[0].size();++j){
                ans[j][i] = A[i][j];
            }
        }
        return ans;
    }
};
