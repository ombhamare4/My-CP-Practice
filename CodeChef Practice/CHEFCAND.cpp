//CHEFCAND
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long

void solve(){
    ll n,x;
    cin>>n>>x;
    ll req = 0;
    if(n>x){
        ll a = n-x;
        if(a%4!=0){
            ll b = a/4;
            req = b+1;
        }else{ 
            req = abs(a/4);
        }
    }
    
    cout<<req<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    
    
    return 0;
}