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
    string s;
    cin>>s;

    sort(s.begin(),s.end());
    vector<string> ans;

    do{
        ans.push_back(s);
    }while(next_permutation(s.begin(),s.end()));

    cout<<ans.size()<<endl;
    for(auto c: ans){
        cout<<c<<endl;
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