// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// leetcode: 941. Valid Mountain Array
// Beginning with the name of Almighty GOD ALLAH>
class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        
        if(A.size()<3)
            return false;
        
        int count=0;
        for(int i=1;i<A.size()-1;i++)
        {
        
            if(A[i]>A[i-1] && A[i]>A[i+1] )
                count++;    
            if(A[i]==A[i-1] || A[i]==A[i+1])
                return false;
        
            if(A[i] < A[i-1] && A[i]<A[i+1])
                return false;
        }
        if(count!=1){
            return false;
        }
        
        return true;
    }
};
