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
int Search(long long * pre, int start, int end, long long x)
{
    if(start > end)
        return -1;
    if(x >= pre[end])
        return end;
    int mid = start + (end-start)/2;
    
    if(x == pre[mid])
        return mid;
    
    if(mid > 0 && pre[mid-1]<=x && x<pre[mid])
        return mid-1;
    
    if(x < pre[mid])
        return Search(pre,start,mid-1,x);

    return Search(pre,mid+1,end,x);
}
int main()
{
    int n;
    cin >> n;
    long long * arr = new long long[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    long long * prefix = new long long[n];
    prefix[0] = arr[0];
    for(int i=1;i<n;i++)
        prefix[i] = prefix[i-1] + arr[i];
    
    int k;
    cin >> k;
    while(k--)
    {
        long long x;
        cin >> x;
        int flo = Search(prefix,0,n-1,x);
        long long val = x;
        if(flo!= -1)
            val -= prefix[flo];
        cout<<(flo + 1)<<" "<<val<<endl;
    }
    
	return 0;
}
