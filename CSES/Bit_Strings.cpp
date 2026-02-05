/*
To calculate the number of bit strings of length n, we need to count the number of ways we
can fill n slots with either a 0 or a 1. For each slot, we have 2 choices (0 or 1), so the total
number of possible bit strings is 2^n.
To output the answer modulo 10^9+7, we can simply take
the remainder of the final result after dividing by 10^9+7.
*/
#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
const int MOD = 1e9 + 7;
void solve(){
   long long n;
    cin >> n;
    ll ans =1;
    for(int i=0;i<n;i++){
        ans = (ans*2) % MOD;
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