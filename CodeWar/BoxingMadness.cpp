// Author: Mohammad Faisal
// Email:: mohammad.faisal78612@gmail.com
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
/*
 
        _/ _/ _/ _/  _/ _/ _/ _/   _/  _/ _/ _/   _/ _/ _/ _/  _/
       _/           _/       _/   _/  _/         _/       _/  _/
      _/ _/ _/     _/ _/ _/ _/   _/  _/ _/ _/   _/ _/ _/ _/  _/
     _/           _/       _/   _/        _/   _/       _/  _/
    _/           _/       _/   _/  _/ _/ _/   _/       _/  _/ _/ _/ _/
 
 */
/*
MIT License
	Copyright (c) 2019 Mohammad Faisal <mohammad.faisal78612@gmail.com>
	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:
	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.
	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/
#include<bits/stdc++.h>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	// Write your code here
    int n;
    cin >> n;
    map<int,string> score;
    int counter =0;
    while(n--)
    {
        string s;
        cin >> s;
        int k,m;
        cin >> k >> m;
        int count=0;
        // int temp = m;
        int res;
        while(m>k)
        {
            res = m/k;
            count+=res;
            m = (m%k) + 2*res;
            if(m==k)
            {
                count+=1;
                break;
            }
        }
        score.insert({count,s});
        counter+=count;
        // cout<<count<<endl;
    }
	// for(map<int,string>::iterator it=score.begin();it!=score.end();it++)
	// {
	// 	cout<<it->first<<" "<<it->second<<endl;
	// }
	// cout<<"winner"<<endl;
	map<int,string>:: reverse_iterator itr;
	itr = score.rbegin();
	cout<< counter<<endl;
	cout<< itr->second<<endl;
    return 0;
}
