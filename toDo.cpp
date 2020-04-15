





//void rearrange(long long arr[], long long n)
//{
//    map<long long, long long> d;
//    for(int i=0;i<n;i++)
//    {
//        d[arr[i]]++;
//    }
//    vector<long long> rest,v;
//    for(map<long long, long long>::iterator it=d.begin();it!=d.end();it++)
//        if(it->second==2)
//            v.push_back(it->first);
//        else
//            rest.push_back(it->first);
//
//
//    multimap<long long, long long> mp;
//    multimap<long long ,long long>:: iterator it;
//
//    mp.insert(make_pair(abs(arr[0]-arr[1]),arr[0]));
//    for (int i = 1 ; i < n-1; i++)
//        mp.insert(make_pair(abs(arr[i]-arr[i+1]),arr[i]));
//
//
//    int i = 0;
//    for (it = mp.begin(); it != mp.end(); it++)
//        arr[i++] = (*it).second ;
//}
//int main()
//{
//    faisal
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        long long n;
//        cin >> n;
//        long long arr[n];
//        for(int i=0;i<n;i++)
//            cin >> arr[i];
//        sort(arr,arr+n);
//        rearrange(arr, n);
//        for(int i=0;i<n;i++)
//            cout<<arr[i]<<" ";
//        cout<<endl;
//    }
//    return 0;
//}
//







//int main()
//{
//    faisal
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        long long n;
//        cin >> n;
//        cout<<n<<endl;
//    }
//    return 0;
//}






//long long dp[20][180][2];  // dp[ind][sum][tight]
//void digits(long long a, vector<int>&arr)
//{
//    while(a)
//    {
//        arr.push_back(a%10);
//        a/=10;
//    }
//}
//long long helper(int ind, int sum, int tight, vector<int>&arr)
//{
//    if(ind==-1)
//        return sum;
//
//    if(dp[ind][sum][tight]!= -1 && tight!=1)   // already stated cases
//        return dp[ind][sum][tight];
//
//    int k = (tight) ? arr[ind]: 9;
//
//    long long result=0;
//
//    for(int i=0;i<=k;i++)
//    {
//        int newTight = tight & (arr[ind]==i);
//
//        result+=helper(ind-1,sum+i,newTight,arr);
//    }
//    if(!tight)
//        dp[ind][sum][tight] = result;
//    return result;
//}
//long long solve(long long a, long long b)
//{
//    memset(dp,-1,sizeof(dp));   // initilization
//    vector<int> arr;
//    digits(a-1, arr);
//
//    long long ans1 = helper((int)arr.size()-1, 0, 1, arr);
//
//    arr.clear();
//
//    digits(b, arr);
//
//    long long ans2 = helper((int)arr.size()-1, 0, 1, arr);
//
//    return (ans2-ans1);
//}
//int main()
//{
//
//    long long a,b;
//    cin >> a >> b;
//    long long res = solve(a,b);
//    cout<<res<<endl;
//    return 0;
//}
//
//

//int main()
//{
//    faisal
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        long long person,bar;
//        cin >> person >> bar;
//        long long * arr = new long long[person+1];
//        long long int sum = 0, part = 0;
//        int ext = 0;
//        int ans = 0;
//        for(int i=0;i<person;i++){
//            cin >> arr[i];
//            sum+=arr[i];
//            if(arr[i]>=bar)
//            {
//                ++ext;
//                part+=arr[i];
//            }
//        }
//        if(part==0)
//        {
//            cout<<"0"<<endl;
//            continue;
//        }
//        long long int rem = sum - part;
//        ans+=(part/bar);
//        rem+=(part%bar);
//        person-=ext;
//        if((double)(rem/person)>=bar)
//        {
//            ans+=person;
//        }
//        cout<<ans<<endl;
//    }
//    return 0;
//}
//int main()
//{
//    faisal
//
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        int * play = new int[n+1];
//        int * stat = new int[n+1];
//
//        for(int i=1;i<=n;i++)
//            cin >> play[i] >> stat[i];
//
//        bool flag = true;
//        for(int i=2;i<=n;i++)
//        {
////            if()
////            {
////                flag = false; break;
////            }
//            if(stat[i]-stat[i-1]<0 && play[i]-play[i-1]<=0 && abs(stat[i]-stat[i-1]) > abs(play[i]-play[i-1]))
//            {
//                flag = false;break;
//            }
//            else if(stat[i]-stat[i-1]>0 && play[i]-play[i-1]<=0 && abs(stat[i]-stat[i-1]) > abs(play[i]-play[i-1]))
//            {
//                flag = false; break;
//            }
//            else if(stat[i]-stat[i-1]<=0 && play[i]-play[i-1]<0 && abs(stat[i]-stat[i-1] > play[i]-play[i-1]))
//            {
//                flag = false; break;
//            }
//        }
//        (flag) ? cout<<"YES": cout<<"NO";
//        cout<<endl;
//        delete[] play;
//        delete[] stat;
//    }
//    return 0;
//}

//6
//3
//0 0
//1 1
//1 1
//2
//1 0
//1000 3
//4
//10 1
//15 2
//10 2
//15 2
//1
//765 432
//2
//4 4
//4 3
//5
//0 0
//1 0
//1 0
//1 0
//1 0












//
//int arr[100010],cnt[2000200];
//long long bad[2000200];
//int main()
//{
//    faisal
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        int pre = 0;
//        long long result = 0;
//        cnt[0] = 1, bad[0] = 1;
//        for(int i=1;i<=n;i++)
//        {
//            cin >> arr[i];
//            pre = pre ^ arr[i];
//            // triplets = triplets + (number of times subarray exists * last ind) - (bad ways such that j<i is occurs);
//            result+= 1ll*i*cnt[pre]-bad[pre];
//            ++cnt[pre];
//            bad[pre]+=(i+1);
//        }
//        cout<<result<<endl;
//        // this is for the next test case
//        // we have to empty all the things so the new test case should be performed perfectly.
//        pre  =0;
//        for(int i=1;i<=n;i++)
//        {
//            pre^=arr[i];
//            --cnt[pre];
//            bad[pre]-=(i+1);
//        }
//    }
//    return 0;
//}
//
//
//
//







//int main()
//{
//    faisal
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        long long k,dgroot;
//        cin >> k >> dgroot;
//
//        long long res = (k-1)*9+dgroot;
//        cout<<res<<endl;
//    }
//    return 0;
//}


// [:|||:]
// [::]



//int main()
//{
//    faisal
//    stack<char> st;
//    string s;
//    cin >> s;
//    int count = 0;
//    st.push('#');
////    st.push(s[0]);
//    for(int i=0;i<(int)s.size();i++)
//    {
//        if(st.top()=='#')
//            st.push(s[i]);
//        else if(st.top()==s[i])
//        {
//            count++;
//            st.pop();
//        }
//        else{
//            st.push(s[i]);
//        }
////        cout<<st.top()<<endl;
//    }
////    cout<<count<<endl;
//    (count&1) ? cout<<"Yes": cout<<"No";
//    return 0;
//}
//
//


//const int N = 1e5 + 5;
//int m,n;
//int seen[N],freq[N];
//int main()
//{
//    faisal
//    cin >> m >> n;
//    for(int i=0;i<n;i++)
//    {
//        int x;
//        cin >> x;
//        printf("%d",++seen[++freq[x]]==m);
//    }
//    return 0;
//}






//bool ispalind(string j)
//{
//    string x;
//    x = j;
//    reverse(x.begin(),x.end());
//    return x==j;
//}
//
//int main()
//{
//    faisal
//    string s;
//    cin >> s;
//    int len = (int)s.size();
//    int k;cin >> k;
//    int part = len/k;
//    if(len%k!=0){
//        cout<<"NO";
//        return 0;
//    }
//    bool flag = true;
//    for(int i=0;i<len;i+=part)
//    {
////        cout<<"I: "<<i<<endl;/
//        string temp = s.substr(i,part);
//        flag = ispalind(temp);
//        if(!flag)
//            break;
//    }
//    (flag) ? cout<<"YES": cout<<"NO";
//
//    return 0;
//}
//
//


// zero and ones
//
//int main()
//{
//    string s;
//    int cases = 1;
//    while(cin >> s)
//    {
//        printf("Case %d:\n",cases++);
//        int q;
//        cin >> q;
//        while(q--){
//            int i,j;
//            cin >> i >> j;
//            if(i>j) swap(i,j);
//            string temp = s.substr(i,j-i+1);
//            if(temp.size()<=1 || unique(temp.begin(),temp.end())==temp.begin()+1)
//            {
//                printf("Yes\n");
//            }
//            else{
//                printf("No\n");
//            }
//        }
//    }
//    return 0;
//}


// Doremon
//int main()
//{
//    faisal
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int pos = 0;
//        int n,x;
//        cin >> n >> x;
//        bool * arr = new bool[210];
//        for(int i=1;i<=210;i++)
//            arr[i] = false;
////        set<int> st;
//        for(int i=0;i<n;i++)
//        {
//            int k;
//            cin >> k;
//            arr[k] = true;
//        }
////        int temp = x;
//        for(int i=1;i<=210;i++)
//        {
//            if(arr[i]==false){
//                arr[i]=true;--x;}
//            if(x==0) break;
//        }
//        int mx = 0;
//        for(int i=1;i<=210;i++)
//        {
//            if(arr[i])
//                pos++;
//            else{
//                mx = max(mx,pos);
//                pos=0;
//            }
//        }
//        cout<<mx<<endl;
////        delete[] arr;
//    }
//    return 0;
//}
//



// Happy Birthday
//int main()
//{
//    int t;
//    cin >> t;
//    int repeat = t/16;
//    ++repeat;
//    vector<string> anthm;
//    anthm.push_back("Happy");anthm.push_back("birthday");anthm.push_back("to");anthm.push_back("you");
//    anthm.push_back("Happy");anthm.push_back("birthday");anthm.push_back("to");anthm.push_back("you");
//    anthm.push_back("Happy");anthm.push_back("birthday");anthm.push_back("to");anthm.push_back("Rujia");
//    anthm.push_back("Happy");anthm.push_back("birthday");anthm.push_back("to");anthm.push_back("you");
//    vector<string> s;
//    while(t--)
//    {
//        string l;
//        cin >> l;
//        s.push_back(l);
//    }
////    cout<<"repeat: "<<repeat<<endl;
//    while(repeat--)
//    {
//        for(int i=0;i<(int)anthm.size();)
//        {
//            for(int j=0;j<(int)s.size();j++)
//            {
//                cout<<s[j]<<": "<<anthm[i]<<"\n";++i;
//                if(i==(int)anthm.size())
//                    break;
//            }
//        }
//    }
//    anthm.clear();
//    s.clear();
//    return 0;
//}
//





// ROBOT INSTRUCTION
//int main()
//{
//    int t;
//    scanf("%d",&t);
//    while(t--)
//    {
//        int n;
//        scanf("%d",&n);
//        int pos = 0;
//        int ind = 1;
//        vector<int> prev(101);
//        while(n--){
//        string s;
//        cin >> s;
//        if(s=="LEFT")
//            --pos,prev[ind]= -1;
//        else if(s=="RIGHT")
//            ++pos,prev[ind]= 1;
//        else if(s=="SAME")
//        {
//            string t;
//            cin >> t;
//            int x;
//            scanf("%d",&x);
////            cout<<prev[x]<<endl;
//            pos = pos + prev[x];
//            prev[ind]=prev[x];
//        }
//            ++ind;
//        }
//        printf("%d\n",pos);
//    }
//    return 0;
//}


// Zapping
//int main()
//{
////    int t;
////    scanf("%d",&t);
//    int a,b;
//    while(scanf("%d %d",&a,&b),(a!=-1 && b!=-1))
//    {
////        int a,b;
//        cout<<min(100+min(a,b)-max(a,b),abs(a-b))<<"\n";
//    }
//    return 0;
//}
//
//

// Tariff Plan
//int main()
//{
//    int t;
//    scanf("%d", &t);
//    int cnt=1;
//    while(t--)
//    {
//        int n;
//        scanf("%d",&n);
//        int plan1 = 0, plan2 =0;
//        for(int i=0;i<n;i++)
//        {
//            int x;
//            scanf("%d",&x);
//            int x1,x2;
//            x1 = x2 = x;
//            x1 = x1/30;
//            x2 = x2/60;
//            plan1 +=(x1+1)*10;
//            plan2 +=(x2+1)*15;
//        }
//        if(plan1 > plan2)
//        {
//            printf("Case %d: Juice %d\n",cnt,plan2);
//        }
//        else if(plan2 > plan1)
//        {
//            printf("Case %d: Mile %d\n",cnt,plan1);
//        }
//        else if(plan1==plan2)
//        {
//            printf("Case %d: Mile Juice %d\n",cnt,plan2);
//        }
//        ++cnt;
//
//    }
//    return 0;
//}


//Google is Feeling Lucky
//bool comp(const pair<int,int> &u, const pair<int,int> &v)
//{
//    if(u.first==v.first)
//        return u.second < v.second;
//    return u.first > v.first;
//}
//int main()
//{
//    int t;
//    scanf("%d",&t);
//    int lst=1;
//    while(t--)
//    {
//        vector<pair<int,int>> v;
//        vector<string> url;
//        int counter = 10,ind=0;
//        while(counter--)
//        {
//            string s;
//            cin >> s;
//            url.push_back(s);
//            int occur;
//            scanf("%d",&occur);
//            v.push_back(make_pair(occur,ind)),++ind;
//        }
//        stable_sort(v.begin(),v.end(),comp);
//        int mx = 1;
//        for(int j=0;j<(int)v.size()-1;j++){
//            if(v[j].first!=v[j+1].first){
//                break;
//            }
//            ++mx;
//        }
//        printf("Case #%d:\n",lst),++lst;
//        for(int j=0;j<mx;j++)
//        {
//            cout<<url[v[j].second]<<"\n";
//        }
//        url.clear();
//        v.clear();
//    }
//    return 0;
//}




// LamberJack Sequencing
//bool isInc(int * arr,int k)
//{
//    int flag = true;
//    for(int i=0;i<k-1;i++)
//        if(arr[i]>arr[i+1])
//            flag = false;
//    return flag;
//}
//bool isDec(int * arr,int k)
//{
//    int flag = true;
//    for(int i=0;i<k-1;i++)
//        if(arr[i]<=arr[i+1])
//            flag = false;
//    return flag;
//}
//int main()
//{
//    int t;
//    scanf("%d",&t);
//    printf("Lumberjacks:\n");
//    while(t--)
//    {
//        int * arr = new int[10];
//        for(int i=0;i<10;i++)
//            cin >> arr[i];
//        bool res = isDec(arr, 10) || isInc(arr, 10);
//        (res) ? printf("Ordered\n"):printf("Unordered\n");
//        delete[] arr;
//    }
//    return 0;
//}
//



// Horror Dash
//int main()
//{
//    int t;
//    scanf("%d",&t);
//    int i=1;
//    while(t--)
//    {
//        int n;
//        scanf("%d",&n);
//        int speed = -99999;
//        for(int i=0;i<n;i++)
//        {
//            int x;
//            scanf("%d",&x);
//            if(x > speed)
//                speed = x;
//        }
//        printf("Case %d: %d\n",i,speed),++i;
//    }
//    return 0;
//}


// Jumping Mario
//
//int main()
//{
//    int t;
//    scanf("%d", &t);
//    int i=1;
//    while(t--)
//    {
//        int n;
//        scanf("%d", &n);
//        int high = 0,low=0;
//        int prevHeight;
//        scanf("%d", &prevHeight);
//        --n;
//        while(n--)
//        {
//            int height;
//            scanf("%d", &height);
//            if(prevHeight > height)
//                ++low;
//            else if(prevHeight < height)
//                ++high;
//            prevHeight = height;
//        }
//        printf("Case %d: %d %d\n",i,high,low),++i;
//    }
//    return 0;
//}







// sub Prime
//int main()
//{
//    int bank,den;
//    while(scanf("%d %d", &bank,&den),(bank!=0 && den!=0))
//    {
//        int * reserve = new int[bank+1];
//        for(int i=1;i<=bank;i++)
//            scanf("%d",&reserve[i]);
//
//        while(den--)
//        {
//            int debtor, creditor, val;
//            scanf("%d %d %d",&debtor, &creditor, &val);
//            reserve[debtor] = reserve[debtor] - val;
//            reserve[creditor] = reserve[creditor] + val;
//        }
//        bool neg = false;
//        for(int i=1;i<=bank;i++)
//            if(reserve[i]<0){ neg=true;break;}
//        (neg) ? printf("N\n"): printf("S\n");
//        delete[] reserve;
//    }
//    return 0;
//}





// Evening Planning
//int main()
//{
//    int person, budget, hotel, weeks;
//    while(scanf("%d %d %d %d", &person,&budget,&hotel,&weeks)==4)
//    {
////        scanf("%d %d %d",&budget,&hotel,&weeks);
//        int best_price = budget+1;
//        while(hotel--){
//        int rent;
//        scanf("%d", &rent);
//            for(int i=0;i<weeks;i++)
//            {
//                int numberOFBedsAvailable;
//                scanf("%d", &numberOFBedsAvailable);
//                if(numberOFBedsAvailable>=person)
//                {
//                    if(person*rent<best_price)
//                        best_price = person*rent;
//                }
//            }
//        }
//        if(best_price<=budget)
//            printf("%d\n",best_price);
//        else
//            printf("stay home\n");
//    }
//    return 0;
//}




// Summing Digits
//void sumOfdigits(long long int &k)
//{
////    int temp = k;
//    int sum =0;
//    while(k>0)
//    {
//        sum+=k%10;
//        k/=10;
//    }
//    k = sum;
//}
//int solve(long long int n)
//{
//    if(n>=0 && n<=9)
//        return (int)n;
//
//    sumOfdigits(n);
//    return solve(n);
//}
//int main()
//{
//    long long int n;
//    while(scanf("%lld",&n),(n!=0)){
//    printf("%d\n",solve(n));
//    }
//    return 0;
//}








// The Swallowing Ground
//int main()
//{
//    int t;
//    scanf("%d",&t);
//    bool ok;
//
//    char separater[2];
//    separater[0] = separater[1] = '\0';
//    while(t--)
//    {
//        ok = true;
//        int num, north, south;
//        scanf("%d %d %d", &num, &north, &south);
//        int diff = north-south;
//        --num;
//        while(num--)
//        {
//            scanf("%d %d",&north, &south);
//            if(ok && north-south!=diff)
//                ok = false;
//        }
//
//    if(ok)
//    {
//        printf("%syes\n",separater);
//    }
//    else{
//        printf("%sno\n",separater);
//    }
//    separater[0]='\n';
//    }
//    return 0;
//}








// Ecological Premium
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        long long sum=0;
//        int n;
//        cin >> n;
//        while(n--)
//        {
//            int area, animal, friendness;
//            cin >> area >> animal >> friendness;
//            sum +=area*friendness;
//        }
//        cout<<sum<<"\n";
//    }
//    return 0;
//}
// Secret Research
//int main()
//{
//    int t;cin >> t;
//    while(t--)
//    {
//        string s;
//        cin >> s;

//        if(s=="1" || s=="4" || s=="78")
//            printf("+\n");
//        else if(s=="135" || s=="435" || s=="7835")
//            printf("-\n");
//        else if(s=="914"||s=="944" || s=="9784")
//            printf("*\n");
//        else if(s=="1901" || s=="1904" || s=="19078")
//            printf("?\n");
//        else
//            printf("+\n");
//    }
//    return 0;
//}
//













// Hajj E akbar
//int main()
//{
//    int i=1;
//    while(1)
//    {
//        string s;
//        cin >> s;
//        if(s=="*") break;
//        if(s=="Hajj")
//            printf("Case %d: Hajj-e-Akbar\n",i);
//        else if(s=="Umrah")
//            printf("Case %d: Hajj-e-Asghar\n",i);
//        ++i;
//    }
//    return 0;
//}
//





// Save Setu
//int main()
//{
//    int t;
//    cin >>t;
//    long long report = 0;
//    while(t--)
//    {
//        string s;
//        cin >> s;
//        if(s=="donate")
//        {
//            int amount;
//            cin >> amount;
//            report+=amount;
//        }
//        else if(s=="report")
//        {
//            printf("%d\n",report);
//        }
//    }
//    return 0;
//}

// Packing for Holiday
//int main()
//{
//    int t;
//    cin >> t;
//    int i=1;
//    while(t--)
//    {
//        int l,w,b;
//        cin >> l >> w >> b;
//        if(l<=20 && w<=20 && b<=20) printf("Case %d: good\n",i);
//        else
//            printf("Case %d: bad\n",i);
//        ++i;
//    }
//    return 0;
//}







// One-Two-Three
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--){
//        string s;
//        cin >> s;
//        int n = (int)s.size();
//        if(n==5)
//            cout<<"3";
//        else
//        {
//            if((s[0]=='o' &&s[1]=='n')||(s[0]=='o' && s[2]=='e') || (s[1]=='n'&&s[2]=='e')||s=="one")
//               cout<<"1";
//            else if((s[0]=='t' &&s[1]=='w')||(s[0]=='t' && s[2]=='o') || (s[1]=='w'&&s[2]=='o')||s=="two")
//                cout<<"2";
//        }
//        cout<<"\n";
//    }
//    return 0;
//}
//Emoogle Balance
//int main()
//{
//    int n;
//    int i=1;
//    while(scanf("%d",&n),(n!=0))
//    {
//        int treat=0,y=n;
//        while(y--)
//
//        {
//            int x;
//            cin >> x;
//            (x==0) ? --treat: ++treat;
//        }
//        printf("Case %d: %d\n",i,treat),i++;
//    }
//    return 0;
//}


//Language Detection
//int main()
//{
//    int i=1;
//    while(true)
//    {
//        string s;
//        cin >> s;
//        if(s=="#") return 0;
//
//        if(s=="HELLO") printf("Case %d: ENGLISH\n",i);
//        else if(s=="HOLA") printf("Case %d: SPANISH\n",i);
//        else if(s=="HALLO") printf("Case %d: GERMAN\n",i);
//        else if(s=="‘BONJOUR") printf("Case %d: FRENCH\n",i);
//        else if(s=="CIAO") printf("Case %d: ITALIAN\n",i);
//        else if(s=="ZDRAVSTVUJTE") printf("Case %d: RUSSIAN\n",i);
//        else printf("Case %d: UNKNOWN\n",i);
//        ++i;
//    }
//    return 0;
//}


//Cost Cutting
//int main()
//{
//    int t;
//    cin >> t;
//    int i=1;
//    while(t--)
//    {
//        vector<int> cost;
//        int a,b,c;
//        cin >> a >> b>>c;
//        cost.push_back(a);cost.push_back(b);cost.push_back(c);
//        sort(cost.begin(),cost.end());
//        printf("Case %d: %d\n",i,cost[1]),++i;
//        cost.clear();
//    }
//    return 0;
//}
// Automatic Answer
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        long long ans;
//        ans = n*567;
//        ans = ans/9;
//        ans+=7492;
//        ans*=235;
//        ans/=47;
//        ans-=498;
//        cout<<abs((ans/10)%10)<<endl;
//    }
//    return 0;
//}
//  Division of Nlogonia
//int main()
//{
//    int t;
//    while(scanf("%d",&t),(t!=0))
//    {
//        int n,m;
//        cin >> n >> m;
//        while(t--)
//        {
//            int x,y;
//            cin >> x >>y;
//            if(x==n || y==m)
//                cout<<"divisa";
//            else if(x>n && y>m)
//                cout<<"NE";
//            else if(x>n && y<m)
//                cout<<"SE";
//            else if(x<n && y>m)
//                cout<<"NO";
//            else if(x<n && y<n)
//                cout<<"SO";
//            cout<<"\n";
//        }
//    }
//    return 0;
//}
// Parking
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int mx = INT_MIN, mn = INT_MAX;
//        int n;cin >> n;
//        for(int i=0;i<n;i++)
//        {
//            int x;
//            cin >> x;
//            mx = max(x,mx);
//            mn = min(x,mn);
//        }
//        cout<<2*(mx-mn)<<"\n";
//    }
//    return 0;
//}
// Relational Operators
//int main()
//{
//    int t;cin >>t;
//    while(t--)
//    {
//        int a,b;cin >> a >> b;
//        if(a>b) cout<<">";
//        if(a<b) cout<<"<";
//        if(a==b) cout<<"=";
//        cout<<"\n";
//    }
//    return 0;
//}

// Searching for Nessy
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n,m;
//        cin >> n >> m;
//        cout<<(n/3)*(m/3)<<endl;
//    }
//    return 0;
//}


// Combination Lock
//int main()
//{
//    int intial, first, second ,third;
//    while(scanf("%d %d %d %d", &intial, &first, &second, &third),(intial||first||second||third))
//    {
//        printf("%d\n",1080+((intial-first+40)%40 +(second-first+40)%40 +(second-third+40)%40)*9);
//    }
//    return 0;
//}
//
//














// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL


//
//struct Node{
//    int data;
//    struct Node* next;
//};
//
//Node* reverse(Node* head)
//{
//    Node* node= head;
//    if(node==NULL)
//        return NULL;
//    if(node->next ==NULL)
//    {
//        head = node;
//        return head;
//    }
//
//    Node * temp = reverse(node->next);
//
//    temp->next = node;
//    node->next = NULL;
//    return temp;
//}
//int main()
//{
//    ios_base::sync_with_stdio();
//    cin.tie(nullptr);
//    cout.flush();
//
//    return 0;
//}
//
//





////
////  main.cpp
////  My CodeGround
////
////  Created by Faisal on 02/03/20.
////  Copyright © 2020 Faisal Programming and Development. All rights reserved.
////
//
//#include <iostream>
//#include<algorithm>
//#include<vector>
//#include<iterator>
//#include<unordered_map>
//#include<unordered_set>
//#include<stack>
//#include<queue>
//
//using namespace std;
//int counter =0;
//
//
////struct stack{
////    int arr[1000];
////    int top;
////};
////
////struct stack s;
////
//// void push(int x)
////{
////    if(isFull()){
////        cout<<"it is already full. sorry";
////    }
////    else{
////        s.top++;
////        s.arr[s.top] = x;
////    }
////}
////
////void pop()
////{
////    if(isEmpty())
////    {
////        cout<<"it is Already Empty you can do that.";
////    }
////    else{
////        s.top--;
////    }
////}
////void peak()
////{
////    if(isEmpty())
////        cout<<"sorry is it is already empty";
////    else
////        return s.arr[s.top];
////}
////bool isFull()
////{
////    if(s.top == size-1)
////        return 1;
////    return 0;
////}
////bool isEmpty()
////{
////    if(s.top == -1)
////        return -1;
////    return 0;
////}
////
//void solution(int n)
//{
//    queue<int> q;
//    int cnt = 0;
//    q.push(0);
//    while(cnt<n)
//    {
//        int temp = q.front();
//        q.pop();
//
//        q.push(temp*10+1);
//        q.push(temp*10+2);
//        q.push(temp*10+3);
//
//        if(temp!=0)
//        {
//            cout<<temp<<" ";
//            cnt++;
//        }
//    }
////    q.push(1);
////    q.push(2);
////    q.push(3);
////
////
//}
//int main(int argc, const char * argv[]) {
//    // insert code here...
////    std::cout << "Hello, World!\n";
//
//    cout<<"Hello Faisal Ansari"<<endl;
////
////    s.top = -1;
////
////    int n,m;
////    cin >> n >> m;
////    int arr[n][m];
////
////    for(int i=0;i<n;i++)
////        for(int j=0;j<m;j++)
////            cin >> arr[i][j];
////
////    int sum = 0;
////    for(int i=0;i<m;i++)  // col
////        for(int j=0;i<n;j++) // row
////        {
////            if(arr[j][i] == 1)
////                arr[j][i] = 1 + arr[j-1][i];
////        }
////
//
////    int n;
////    cin >> n;
////    int * arr = new int[n];
////    for(int i=0;i<n;i++)
////        cin >> arr[i];
////    vector<int> curr(n);
////    int ind =0;
////    int k = 0;
////    solve(arr, k,curr,ind);
////
////    string s;
////    s="";
////    int k;
////    cin >> k;
////    dict(s,k);
//
////    string s;
////    cin >> s;
////    int n = (int)s.size();
////    permulation(s, 0, n-1);
////
//    int n;
//    cin >> n;
////    int * arr = new int[n+1];
//
////    for(int i=0;i<n;i++)
////        cin >> arr[i];
//
//    solution(n);
////    int sum;
////    cin >> sum;
//
//
////    bool res = consecutive(arr, n);
////    insertion_sort(arr,n);
//
////    (res) ? cout<<"YES": cout<<"NO";
//
////
////    for(int i=0;i<n;i++)
////        cout<<arr[i]<<" ";
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//void permulation(string s, int l, int r)
//{
//    if(l==r)
//        cout<<s<<endl;
//    else{
//        for(int i=l; i<=r; i++)
//        {
//            swap(s[l],s[i]);
////            Right Rotated array
//            permulation(s, l+1, r);
////            left rotated array
//            swap(s[l],s[i]);   // UNDO
//        }
//    }
//}
////void lexographicSubset(int* arr, int n, int* temp, int idx)
////{
////    if(idx==n)
////        return ;
////
////    for(int i=idx+1;i<n;i++)
////    {
////        temp[i] = arr[i];
////        lexographicSubset(arr, n, temp, i);
////
////
////    }
////}
//
//void dict(string s, int need)
//{
//    if(counter>=need)
//        return ;
//
//    if((int)s.size() > 3)
//        return ;
//
//    if((int)s.size() > 0)
//    {cout<<s<<endl;counter++;}
//
//    dict(s+"a",need);
//    dict(s+"b",need);
//    dict(s+"c",need);
//
//}
////void solve(int * arr ,int k,vector<int> v, int idx)
////{
////    if(k==(int)v.size())
////    {
////        for(int j=0;j<idx;j++)
////            cout<<v[j]<<" ";
////        cout<<endl;
//////        v.clear();
////        return ;
////    }
////    v[idx] = arr[k];
////    solve(arr,k+1,v,idx+1);
////    solve(arr,k+1,v,idx);
////}
//void Swap(int x, int y)
//{
//    int temp;
//    temp = x;
//    x = y;
//    y = temp;
//}
//
//void swap(string s, string t)
//{
//    string temp;
//    temp = s;
//    s = t;
//    t = temp;
//}
//void insertion_sort(int *arr, int n)
//{
//    for(int i=0;i<n-1;i++)
//        for(int j=i+1;j>=0;j--)
//            if(arr[j-1]>arr[j])
//                Swap(arr[j-1],arr[j]);
//}
////void fnction is how to do idoakjkalskfjalksfj
////
////bool Solve(int * arr, int n, int sum)
////{
////    unordered_map<int, int> mp;
////    for(int i=0;i<n;i++)
////        mp.insert(make_pair(arr[i],1));
////
////    for(int i=0;i<n;i++)
////    {
////        if(arr[i]==sum-arr[i]) continue;
////        else if(mp.find(sum-arr[i])!=mp.end())
////            return true;
////    }
////    return false;
////}
//
//bool SolveNext(int * arr, int n, int sum)
//{
//    sum = 0;
//    unordered_map<int,int> s;
//    s.insert(make_pair(sum,1));
//
//    for(int i=0;i<n;i++)
//    {
//        sum+=arr[i];
//
//        if(s.find(sum)!=s.end())
//            return true;
//        else
//            s.insert(make_pair(sum,1));
//    }
//    return false;
//}
//
//bool consecutive(int * arr, int n)
//{
//    unordered_map<int, int> lis;
//    int mn = 1e9+5;
//    for(int i=0;i<n;i++)
//    {mn = min(mn, arr[i]);lis[arr[i]]++;}
//
//    for(int i=0;i<n;i++)
//        if(lis[mn+i]!=1)
//            return false;
//
//    return true;
//}


//
//
//
//// Friends Pairing problem
//#include<bits/stdc++.h>
//#define ll long long
//using namespace std;
//
//int main()
//{
//    // ios_base:;sync_with_stdio(false);
//    // cin.tie(nullptr);
//    // cout.flush();
//
//    int t;
//    cin >> t;
//    ll * dp = new ll[31];
//    dp[1] = 1;
//    dp[2] = 2;
//    for(ll i=3;i<=30;i++)
//    {
//        dp[i] = dp[i-1] + (i-1)*dp[i-2]; // single + pair
//    }
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        cout<<dp[n]<<endl;
//    }
//    delete[] dp;
//    return 0;
//}
//
//
//Let f(n) = ways n people can remain single or pair up For n-th person there are two choices:
//
//the nth person remains single, we recurse for f(n - 1)
//n-th person pairs up with any of the remaining n - 1 persons. We get (n - 1) * f(n - 2)
//
//Therefore we can recursively write f(n) as: f(n) = f(n - 1) + (n - 1) * f(n - 2)
//
//
// // Recursive C program for
//// coin change problem.
//#include<bits/stdc++.h>
//using namespace std;
//
//// Returns the count of ways we can
//// sum S[0...m-1] coins to get sum n
//int count( int* S, int m, int n )
//{
//    int* dp = new int[n+1];
//    memset(dp,0,sizeof(dp));
//
//    dp[0]=1;
//    for(int i=0;i<m;i++)
//        for(int j=S[i]; j<=n;j++)
//            dp[j] +=dp[j-S[i]];
//
//    return dp[n];
//}
//
//int main()
//{
//    int n,m;
//    cin >> n >> m;
//    int * arr = new int[m];
//
//    for(int i=0;i<n;i++)
//    cin >> arr[i];
//
//    int ways = count(arr,m,n);
//    cout<<ways<<endl;
//    return 0;
//}
//
//// Palindrome Queries
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    bool dp[n][n];
//    for(int i=0;i<n;i++){
//    for(int j=0;j<n;j++){
//        dp[i][j] = false;
//    }}
//
//    for(int j=1;j<=n;j++)
//    {
//        for(int i=0;i<=n-j;i++)
//        {
//            if(j<=2)
//            {
//                if(s[i]==s[i+j-1])
//                    dp[i][i+j-1]= true;  // checking first and last character should be equal.
//            }
//            else if(s[i]==s[i+j-1])
//                dp[i][i+j-1] = dp[i+1][i+j-2];  // Substring under original string with starting point as l+1 and last point is r-1
//        }
//    }
//    int q;
//    cin >> q;
//    while(q--)
//    {
//        int l,r;
//        cin >> l >> r;
//        (dp[l-1][r-1]) ? cout<<"YES": cout<<"NO";
//        cout<<"\n";
//    }
//    return 0;
//}
//
//
//
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        if (nums.size() == 0)
//        {
//            return 0;
//        }
//        vector<int> result;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            auto it = lower_bound(result.begin(), result.end(), nums[i]);
//            if (it == result.end())
//            {
//                result.push_back(nums[i]);
//            }
//            else
//            {
//                *it = nums[i];
//            }
//        }
//        return result.size();
//
//    }
//};
//
//
//
//
//
////// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
////// AUTHOR:: MOHAMMAD FAISAL
////#include<iostream>
////using namespace std;
//#include<iostream>
//#include<vector>
//#include<iterator>
//#include<queue>
//#include<stack>
//#include<algorithm>
//#include<map>
//#include<unordered_map>
//#include<unordered_set>
//#include<set>
//#define faisal ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.flush();
//using namespace std;
//int main()
//{
//    faisal
//
//
//
//
//
//
//
//
//}

