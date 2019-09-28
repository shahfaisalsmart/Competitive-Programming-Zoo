// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// leetCode: 1108. Defanging an IP Address
class Solution {
public:
    string defangIPaddr(string address) {
        
            // int len  = address.length();
            string ans ="";
            for(int i=0;i<address.size();i++)
            {
                if(address[i]=='.')
                {
                    ans+="[.]";
                }
                else
                    ans+=address[i];
            }
        return ans;
  }
};
