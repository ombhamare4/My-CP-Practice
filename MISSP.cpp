//Chef and Dolls
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
long int n,a,b,c,k,t,temp,v;

void solve(){
    cin>>n;
    map<ll,ll> freq;

    for(ll i=0;i<n;i++){
        cin>>a;
        freq[a]++;
    }

    for(auto e:freq){
        k = e.first;
        v = e.second;

        if(v%2!=0){
            cout<<k<<endl;
            return;
        }
    }

}

int main(){

    cin>>t;
    while(t--){
        solve();
    }

   	return 0;
}