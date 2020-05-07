#include <bits/stdc++.h>

using namespace std;

typedef  unsigned long long int ll;
#define loop(n) for(ll ii = 0; ii < n; ++ ii)
const unsigned int mod = 1000000007;

int main() {
	
     ll t,n;
	 cin>>n>>t;
	 string str;
	 cin>>str;
	 loop(t)
	 {
	    for(int k=0;k<(n-1);k++)
	    {
	        if(str[k]=='B'&&str[k+1]=='G')
	           {
	               swap(str[k],str[k+1]);
	               k++;
	           }
	    }
	 }
	cout<<str<<endl;
	return 0;
}