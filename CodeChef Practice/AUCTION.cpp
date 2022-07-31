//AUCTION
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long


void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    
    if(a>b&&a>c){
        cout<<"Alice"<<endl;
    }else if(b>c&&b>a){
        cout<<"Bob"<<endl;
    }else if(c>a&& c>b){
        cout<<"Charlie"<<endl;
    }
    
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    
    
    return 0;
}