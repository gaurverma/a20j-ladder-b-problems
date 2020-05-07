#include <bits/stdc++.h>

using namespace std;

typedef  unsigned long long int ll;
#define loop(n) for(ll ii = 0; ii < n; ++ ii)
const unsigned int mod = 1000000007;


int main() {
	 
	 ll w;
	 cin>>w;
	 loop(w)
	 {
	 string str;
	 cin>>str;
	 if(str.size()>10)
	 cout<<str[0]<<str.size()-2<<str[str.size()-1]<<endl;
	 else
	 cout<<str<<endl;
     }
	return 0;
}