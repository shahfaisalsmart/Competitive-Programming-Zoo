// Author:: Mohammad Faisal
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
#include<cstdio>
using namespace std;
#define MAXN 400
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int row, col;
	scanf("%d%d",&row,&col);
	
	static char arr[MAXN][MAXN+1];
	
	for(int i=0;i<row;i++)
	{
		scanf("%s",arr[i]);
	}
	
	static int sum[MAXN][MAXN+1];
	for(int i=0;i<row;i++)
	{
		sum[i][0] = 0;
		for(int j=1;j<=col;j++)
		{
			sum[i][j] = sum[i][j-1] +(arr[i][j-1]=='X');	
		}
	}
	
	int ans =0;
	
	for(int i=1;i<=col;i++)
	{
		for(int j=i;j<=col;j++)
		{
			int temp=0, rem =0;
			for(int k=0;k<row;k++)
			{
				if(sum[k][j]-sum[k][i-1]==0){
					if(++temp > rem)
					{
						rem = temp;
					}
				}
				else
				{
					temp=0;
				}
			}
		if(rem > 0)
		{
			ans = max(ans,2*rem+ 2*(j-i+1));
		}
		}
	}
	printf("%d\n",ans-1);
    return 0;
	
}
