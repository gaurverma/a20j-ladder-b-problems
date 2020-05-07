#include <bits/stdc++.h>

using namespace std;

typedef  unsigned long long int ll;
#define loop(n) for(ll ii = 0; ii < n; ++ ii)


int main() {
	
     ll n,m,res=-1;
	 cin>>n>>m;
	 ll temp[m];
	 for(ll i=0;i<m;i++)
	 {
	  cin>>temp[i];
	 }
	 res+=temp[0];
	 for(ll i=1;i<m;i++)
	 {
	    if(temp[i]<temp[i-1])
	      res+=n-temp[i-1]+temp[i];
	    else
	      res+=temp[i]-temp[i-1];
	 }
	 cout<<res<<endl;
	return 0;
}