// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// Leetcode: 1207. Unique Number of Occurrences
class Solution {
public:
bool uniqueOccurrences(vector<int>& arr) {

  map<int,int> mp;
  for(int i: arr)
    mp[i]++;
  map<int,int>::iterator it=mp.begin();
  set<int>st;
  for(;it!=mp.end();it++)
     st.insert(it->second);
  int m = mp.size();
  int s = st.size();

  return (m==s) ? true:false;
    
 mp.clear();
 st.clear();
 
    
}
};
