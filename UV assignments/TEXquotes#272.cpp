#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long int
#define faisal ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;


int main()
{
//    #ifdef ONLINE_JUDGE
//        freopen("input.txt","r",stdin);
//        freopen("output.txt","w",stdout);
//    #endif

//    faisal
    char s[100001];
    bool flag =true;
    while(gets(s))
    {
        for(int i=0;s[i];i++)
        {

            if(s[i]=='\"')
            {
                if(flag)
                    printf("``");
                else
                    printf("''");
                flag= !flag;
            }
            else
                putchar(s[i]);
        }
        puts("");
    }
    return 0;
}
