#include <bits/stdc++.h>
using namespace std;

int main(){
	 long long int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int ans;
		if(str.size()<2){
			ans=0;
		}
		else{
			int n=0;
			unordered_map<char,int>mp;
			for(int i=0;i<str.size();i++){
				mp[str[i]]++;
			}
			for(auto x:mp){
				if(x.second>2){
					n+=2;
				}
				else{
					n+=x.second;
				}
			}
			ans=n/2;
		}
		
	   cout<<ans<<endl;
	}
 
}
