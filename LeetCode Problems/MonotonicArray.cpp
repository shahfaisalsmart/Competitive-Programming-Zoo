// Author: Mohammad Faisal
// Leetcode: 896. Monotonic Array
// Begining with the name of Almighty GOD ALLAH.
class Solution {
public:
    bool isMonotonicINC(vector<int>& A) {
        int flag =0;
        for(int i=0;i<(A.size())-1;i++)
            if(A[i]>A[i+1])
                return false;
        return true;
    }
    bool isMonotonicDEC(vector<int>& A) {
        int flag =0;
        for(int i=0;i<(A.size())-1;i++)
            if(A[i]<A[i+1])
                return false;
        return true;
    }
    bool isMonotonic(vector<int>& A) {
        return (isMonotonicDEC(A) || isMonotonicINC(A));
    }
};
