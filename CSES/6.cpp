#include<bits/stdc++.h>

using namespace std;
typedef long long int ll; 
typedef long long ull;
typedef long double ld;
#define pb push_back
#define pob pop_back
#define ff first
#define ss second

void solve(){
	
	ull row,col;
	cin>>row>>col;
	
	if(row<col){
		ull ans;
		if(col%2!=0){
			ans = (col*col)-row+1;
		}else{
			ans = ((col-1)*(col-1))+row;
		}
		cout<<ans<<endl;
	}else{
		ull ans;
		if(row%2!=0){
			ans = ((row-1)*(row-1))+col;
		}else{
			ans = (row*row)-col+1;
		}
		cout<<ans<<endl;
	}

	
}  

int main(){
	
	ull t=1;
	cin>>t;
	while(t--){
		
		solve();
		
	}
	
	return 0;
}