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
    ll n;
    cin>>n;
    vector<long long> ans;
    for(ll i=2;i<=n;i++){
        int res1 = (i*i)*(i*i-1) / 2;
        int res2 = 4*(i-2)*(i-1);
        ans.pb(res1-res2);
    }

    for(auto i: ans){
        cout<<i<<endl;
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