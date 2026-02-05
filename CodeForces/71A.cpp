#include<bits/stdc++.h>

using namespace std;
typedef long long int ll; 
typedef unsigned long long ull;
typedef long double ld;
#define pb push_back
#define pob pop_back
#define ff first
#define ss second

void solve(){
	string s;
	cin>>s;
	int n = s.length();
	char start = s[0];
	char end = s[n-1];
	// string ans = "";
	if(n>10){
		cout<<start<<n-2<<end<<endl;
	}else{
		cout<<s<<endl;
	}
	
	
}  

int main(){
	
	int t=1;
	cin>>t;
	while(t--){
		
		solve();
		
	}
	
	return 0;
}