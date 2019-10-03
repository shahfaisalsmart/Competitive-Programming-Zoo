// MIT License
// Copyright (c) 2019 Mohammad Faisal <mohammad.faisal78612@gmail.com>
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

// platform: Leetcode Contest [Valid Email Address]
// Coded On: 03/10/2019
// Beginning with the name of Almighty God ALLAH SUBHANA-WATAA-A-ALLAH.

#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    system("clear");

    vector<string> emails;
    for(int i=0;i<3;i++)
    {
        string a;
        cin >> a;
        emails.push_back(a);
    }
    cout<<emails.size()<<endl;
       set<string>st;
        for(int j=0;j<emails.size();j++)
        {
            string s="";
            string temp = emails[j];
            bool flag=true,flag2=false;
            for(int i=0;i<temp.size();i++)
            {
                if(temp[i]=='+' && flag2==false){
                    flag = false;
                }
                if(temp[i]=='@')
                {
                    s+=temp[i];
                    flag2=true;
                    flag=true;
                }
                // cout<<"yes"<<" ";
                if(temp[i]=='.' && flag2==false) continue;
                if(flag==true) 
                {
                    // cout<<"Hello"<<' ';
                    // st.insert(s);
                    s+=temp[i];
                }
                // st.insert(s);
        }
        st.insert(s);
    }
    
    //    for(set<string>:: iterator it=st.begin();it!=st.end();it++)
    //     cout<<*it<<endl;
    return 0;

}
// Actual Leetcode Submission 
/*
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
           set<string>st;
        for(int j=0;j<emails.size();j++)
        {
            string s="";
            string temp = emails[j];
            bool flag=true,flag2=false;
            for(int i=0;i<temp.size();i++)
            {
                if(temp[i]=='+' && flag2==false){
                    flag = false;
                }
                if(temp[i]=='@')
                {
                    s+=temp[i];
                    flag2=true;
                    flag=true;
                }
                // cout<<"yes"<<" ";
                if(temp[i]=='.' && flag2==false) continue;
                if(flag==true) 
                {
                    // cout<<"Hello"<<' ';
                    // st.insert(s);
                    s+=temp[i];
                }
                // st.insert(s);
        }
        st.insert(s);
    }
    
    return st.size();
  }
};
*/
