#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
	int  t;
	cin>>t;
	while(t--){
	  ll n;
	  cin>>n;
      ll sum = ceil((double)sqrt(n));
      ll cnt  = sqrt(n);
      cnt*=cnt;
      if(n-cnt==0) cout<<sum<<" "<<1<<endl;
      else if(n-cnt<=sum) cout<<n-cnt<<" "<<sum<<endl;
      else 
      {
          ll p = sum*sum;
          cout<<sum<<" "<<p-n+1<<endl;
      }
	}
}
