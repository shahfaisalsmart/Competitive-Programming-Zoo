// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// LeetCode:: 860. Lemonade Change
// beginning with the name of Almighty God ALLAH.
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a=0,b=0,c=0;
        // int sum=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5) a++;
            else if(bills[i]==10)
            {
                if(a>0)
                {
                    b++;
                    a--;
                }
                else
                {
                    return false;
                }
            }
            else if(bills[i]==20)
            {
                if(b>0 && a>0)
                {
                    c++;
                    b--;
                    a--;
                    
                }
                else if(a>2)
                {
                    c++;
                    a-=3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};
