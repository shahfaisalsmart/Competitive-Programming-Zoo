// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// LeetCode: 945. Minimum Increment to Make Array Unique
// Beginning With the name of Almighty God ALLAH.
class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
     
        sort(A.begin(),A.end());
        int move = 0;
        for(int i=1;i<A.size();i++)
        {
            if(A[i]<=A[i-1])
            {
                int gap = A[i-1]-A[i]+1;
                move+=gap;
                A[i]+=gap;
            }
        }
        return move;
        
    }
};
