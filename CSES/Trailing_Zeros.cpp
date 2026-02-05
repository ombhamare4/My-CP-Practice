/*
number of factors of 5 in the given number. Since each factor of 5 contributes to one trailing zero,
counting the number of factors of 5 gives us the number of trailing zeros in the given number.
number of factors of 5 in the given number. Since each factor of 5 contributes to one trailing zero,
counting the number of factors of 5 gives us the number of trailing zeros in the given number.
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

ll fact(int n){
    ll res = 1;
    for(int i=1;i<=n;i++){
        res=res*i;
    }
    return res;
}

void solve(){
    ll n,res,count=0;
    cin>>n;
    for (int i = 5; i <= n; i *= 5) {  // Counting the number of factors of 5
        count += n / i;
    }
    // res = fact(n);
    // while(res%10==0){
    //     count++;
    //     res/=10;
    // }
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