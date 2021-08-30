#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
	int  t;
	cin>>t;
	while(t--){
	  ll a,b,c;
	  cin>>a>>b>>c;
	  ll flag=abs(b-a)*2;
	  ll cnt =0;
	  if(a>flag || b>flag || c>flag){
	  	cnt=-1;
	  }
	  else{
	  	 cnt=c + flag/2;
	  	 if(cnt>flag){
	  	 	cnt=c-flag/2;
	  	 }
	  }
	  cout<<cnt<<endl;
	}
}
