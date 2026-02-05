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
    ll a,b;
    cin>>a>>b;
    if((a+b)%3==0 && 2*a>=b && 2*b>=a){
          cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
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