//SPEEDTEST
/*
Not Passed The Case? Try One more Time
*/
#include<bits/stdc++.h>
using namespace std;

#define pb          push_back
#define ll          long long
#define str         string
#define vll         vector<long long int>

void solve(){
    ll a,x,b,t;
    cin>>a>>x>>b>>t;

    float alice = (float)a/x;
    float bob = (float)b/t;

    if(alice>bob){
        cout<<"Alice"<<endl;
    }else if(bob>alice){
        cout<<"Bob"<<endl;
    }else if(bob==alice){
        cout<<"Equal"<<endl;
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