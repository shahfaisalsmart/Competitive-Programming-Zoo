// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// Leetcode: 1189. Maximum Number of Balloons
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        int len = text.size();
        int b=0,a=0,l=0,o=0,n=0;
        for(int i=0;i<len;i++)
        {
            if(text[i]=='b')
                b++;
            if(text[i]=='a')
                a++;
            if(text[i]=='l')
                l++;
            if(text[i]=='o')
                o++;
            if(text[i]=='n')
                n++;
        }
        return min(a,min(b,min(l>>1,min(o>>1,n))));  
    }
};
