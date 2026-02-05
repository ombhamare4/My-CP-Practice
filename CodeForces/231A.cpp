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
	int n;
	cin>>n;
	int count=0;
	for(int i=0;i<n;i++){
		int solve = 0;
		for(int i=0;i<3;i++){
			int x;
			cin>>x;
			if(x==1){
				solve++;
			}
		}
		
		if(solve>=2){
			count++;
		}
	}
	cout<<count<<endl;
}  

int main(){
	
	int t=1;
	// cin>>t;
	while(t--){
		
		solve();
		
	}
	
	return 0;
}