#include <bits/stdc++.h> // Include every standard library 
#include <algorithm>
using namespace std; 
  
typedef long long LL; 
typedef pair<int, int> pii; 
typedef pair<LL, LL> pll; 
typedef pair<string, string> pss; 
typedef vector<int> vi; 
typedef vector<string> vs;
typedef vector<vi> vvi; 
typedef vector<pii> vii; 
typedef vector<LL> vl; 
typedef vector<vl> vvl; 
  
double EPS = 1e-9; 
int INF = 1000000005; 
long long INFF = 1000000000000000005LL; 
double PI = acos(-1); 
int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 }; 
int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 }; 
  
#ifdef TESTING 
#define DEBUG fprintf(stderr, "====TESTING====\n") 
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl 
#define debug(...) fprintf(stderr, __VA_ARGS__) 
#else 
#define DEBUG 
#define VALUE(x) 
#define debug(...) 
#endif 
  
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a)) 
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a)) 
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a)) 
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a)) 
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a)) 
#define FOREACH(a, b) for (auto&(a) : (b)) 
#define REP(i, n) FOR(i, 0, n) 
#define REPN(i, n) FORN(i, 1, n) 
#define MAX(a, b) a = max(a, b) 
#define MIN(a, b) a = min(a, b) 
#define SQR(x) ((LL)(x) * (x)) 
#define RESET(a, b) memset(a, b, sizeof(a)) 
#define fi first 
#define se second 
#define mp make_pair 
#define pb push_back 
#define ALL(v) v.begin(), v.end() 
#define ALLA(arr, sz) arr, arr + sz 
#define SIZE(v) (int)v.size() 
#define SORT(v) sort(ALL(v)) 
#define REVERSE(v) reverse(ALL(v)) 
#define SORTA(arr, sz) sort(ALLA(arr, sz)) 
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz)) 
#define PERMUTE next_permutation 
#define TC(t) while (t--) 

int main()
{
    LL x,y;
    cin>>x>>y;
    vs v,v2;
    REP(i,2*y)
    {
        string local;
        cin>>local;
        v.pb(local);
    }
    REP(i,x)
    {
        string local;
        cin>>local;
        v2.pb(local);
        
    }
    REP(i,x)
    {
        auto it=find(v.begin(),v.end(),v2[i]);
        string s1,s2;
        s1= *it;
        s2= *(it+1);
        if(s2.size()<s1.size())
        cout<<*(it + 1)<<" ";
        else
        cout<<*it<<" ";
    }
    
    cout<<"\n";
    return 0;
}
    
    
    
    
    
    
    
    