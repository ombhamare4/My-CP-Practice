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
    ll n,x,ans = 0;
    cin>>n>>x;

    vector<ll> vc;

    for(int i=0;i<n;i++){
        ll w;
        cin >> w ;
        vc.pb(w);
    }

    sort(vc.begin(), vc.end());

    int i = 0, j = n - 1;
    while(i <= j){
        if(i == j){
            ans++;
            break;
        }
        if(vc[i] + vc[j] <= x){
            i++;
        }
        ans++;
        j--;
    }

    cout<<ans<<endl;

}

int main(){

	int t=1;
	// cin>>t;
	while(t--){
		solve();
	}

	return 0;
}
