#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
	int  t;
	cin>>t;
	while(t--){
	  int  k;
	   cin>>k;
	   int i=1,cnt=0,p=0;
	   while(p!=k){
	   	if(i%3==0){
	   		i++;
	   	}
	   	else if(i%10==3){
	   		i++;
	   	}
	   	else{
	   		cnt=i;
	   		i++;
	   		p++;
	   	}
	   	
	   }
	   cout<<cnt<<endl;
	  
	}
}
