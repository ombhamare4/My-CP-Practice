
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define str string

void solve(){
    str s;
    ll n,x,y;
    cin>>n>>x>>y;
    cin>>s;
    ll c1=0,c2=0;
    
    for(int i=0;i<n;i++){
        if (s[i]=='1'){
            c1++;
        }else{c2++;}
    }
    
    if(c1>0 && c2>0){
        cout<<min(x,y)<<endl;
    }else{
        cout<<0<<endl;
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