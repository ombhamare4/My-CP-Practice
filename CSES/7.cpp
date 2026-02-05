#include<bits/stdc++.h>

using namespace std;
typedef long long int ll; 
typedef  long long ull;
typedef long double ld;
#define pb push_back
#define pob pop_back
#define ff first
#define ss second

void solve(){
	ull n;
	cin>>n;
	vector<int> ans;
	
	for(ull i=1;i<=n;i++){
		ull res;
		res = (pow(i,4)-pow(i,2))/2;
		ans.pb(res);
	}
	
	for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<endl;
	}
}  

int main(){
	
	int t=1;
	// cin>>t;
	while(t--){
		
		solve();
		
	}
	
	return 0;
}