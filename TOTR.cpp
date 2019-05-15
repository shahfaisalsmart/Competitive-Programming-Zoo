///==================================================///
///               !! HELLO WORLD !!                  ///
///                 >>IT'S ME<<                      ///
///               MOHAMMAD FAISAL                    ///
///==================================================///
//THIS CODE IS IMPLEMENTED BY DUGGU_123(MOHAMMAD FAISAL)
// author: MOHAMMAD FAISAL (email: mohammad.faisal78612@gmail.com)
/*
 
        _/ _/ _/ _/  _/ _/ _/ _/   _/  _/ _/ _/   _/ _/ _/ _/  _/
       _/           _/       _/   _/  _/         _/       _/  _/
      _/ _/ _/     _/ _/ _/ _/   _/  _/ _/ _/   _/ _/ _/ _/  _/
     _/           _/       _/   _/        _/   _/       _/  _/
    _/           _/       _/   _/  _/ _/ _/   _/       _/  _/ _/ _/ _/
 
 */
#include<bits/stdc++.h>
using namespace std ;
#define ll long long
#define ull unsigned long long int
#define ld long double
#define rloop(i,n) for (int i = n-1; i >= 0; i--)
#define loop(x, n) for(ll x = 0; x < n; ++ x)
#define rep(x,n) for(ll x=1;x<=n;x++)
#define mp make_pair
#define pb push_back
#define I cin>>
#define O cout<<
#define W(x) while(x--)
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define sc(x) scanf("%s",x)
#define pc(x) printf("%s",x)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second
#define inf 1e18
#define MAX 10000000
#define M 1000000007
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define prec(x) fixed<<setprecision(15)<<x
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define magic ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0)
#define XXX return 0;
#define br cout<<endl;
const double PI=3.141592653589793238462643383279502884197169399375105820974944;
//const ll inf = 1000000000;
//const ll MOD = 1000000007;
vector<bool> chkprime (MAX,true);
unsigned primearray[5761459];


void n_primes(){
    chkprime[0]=chkprime[1]=false;
    for(unsigned i=2;i*i<=MAX;i++){
        if(chkprime[i]){
            for(unsigned j=i;j*i<=MAX;j++) chkprime[i*j]=false;
        }
    }
    unsigned id = 1;
    primearray[0]=2;
    
    for(int i=3;i<=MAX;i+=2){
        if(chkprime[i]){
            primearray[id++]=i;
        }
    }
}

bool primity(long long n)
{
    if(n<=1)
        return false;
    if(n<=3)
        return true;
    
    if(n%2==0 || n%3==0)
        return false;
    
    for(auto i=5; i*i<=n; i+=6)
        if(n%i==0 || n%(i+2)==0)
            return false;
    
    return true;
}

int power_x(int x, unsigned y)
{
    if(y==0)
        return 1;
    if(!(y&1))
        return power_x(x,y>>1)*power_x(x,y>>1);
    return x*power_x(x,y>>1)*power_x(x,y>>1);
}

int order_x(long long x)
{
    int n=0;
    while(x)
    {
        n++;
        x/=10;
    }
    return n;
}

/*bool isArm(long long n)
 {
 int pow=order_x(n);
 long long temp=n,sum=0;
 while(temp)
 {
 int r=temp%10;
 sum+=power_x(r,pow);
 temp/=10;
 }
 if(sum==n)
 return true;
 else
 return false;
 }*/

int main ()
{
    magic;
    /*
     
     O
    <C>
     /\
     
     */
    int t,ind;
    I t;
    string s="abcdefghijklmnopqrstuvwxyz";
    string st="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string ab;
    I ab;
    string k = ab;
    transform(ab.begin(),ab.end(),ab.begin(), ::toupper);
    W(t)
    {
        string q;
        I q;
        int len = q.size();
        loop(i,len)
        {
            if(q[i]=='_')
                q[i]=' ';
            else if(q[i]=='?' || q[i]=='.' || q[i]==','|| q[i]=='!')
                continue;
            else
            {
                if(s.find(q[i])<=s.size())
                {
                    ind = s.find(q[i]);
                    q[i] = k[ind];
                }
                else if(st.find(q[i])<=st.size())
                {
                    ind = st.find(q[i]);
                    q[i] = ab[ind];
                }
            }  
        }
        O q;
        br
    }
    XXX
}
