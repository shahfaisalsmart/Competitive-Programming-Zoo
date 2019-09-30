// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// LeetCode: 908. Smallest Range I
// Beginning with the name of Almighty GOD ALLAH.
class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        
        int bada = *max_element(A.begin(),A.end());
        int chota = *min_element(A.begin(),A.end());
        return (bada-chota<=2*K)? 0 : (bada-chota-2*K);
    }
};
