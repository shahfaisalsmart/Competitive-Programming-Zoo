// Author: Mohammad Faisal
/*
    Defanging an IP Address
    Monday 9 September
  */
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
