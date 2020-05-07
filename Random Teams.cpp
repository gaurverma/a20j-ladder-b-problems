#include <bits/stdc++.h>

using namespace std;

typedef  unsigned long long int ll;
#define loop(n) for(ll ii = 0; ii < n; ++ ii)
const unsigned int mod = 1000000007;

ll combination(ll a,ll b)
{
    ll res=1;
    for(ll i=0;i<b;i++)
      res=res*(a-i);
    for(ll i=b;i>0;i--)
      res/=i;
       return res;
}

int main() {
	
	ll n,m,min,max;
	cin>>n>>m;
	max=combination(n-m+1,2);
	min=(n%m)*combination(n/m +1,2)+(m-n%m)*combination(n/m,2);
    
	 cout<<min<<" "<<max<<endl;
	return 0;
}