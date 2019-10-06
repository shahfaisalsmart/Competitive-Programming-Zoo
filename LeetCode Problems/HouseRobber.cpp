// beginning with the name of Almighty God ALLAH.
// Author: Mohammad Faisal
// LeetCode:  198. House Robber
class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        
        if(len ==0)
            return 0;
        
        if(len ==1)
            return nums[0];
        
        if(len==2)
            return max(nums[0],nums[1]);
        
        int first = nums[0];
        int second = max(first,nums[1]);
        
        int temp;
        for(int i=2;i<len;i++)
        {
            temp = max(nums[i]+first,second);
            first = second;
            second = temp;
        }
        return second;
    }
};
