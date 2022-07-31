#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long


int main(){
    ll t;
    cin>>t;
    vector<int>vc;
    
    for(int i=0;i<t;i++){
        ll x;
        cin>>x;
        vc.pb(x);
    }
    
    for(int i=0;i<t;i++){
        cout<<vc[i]<<endl;
    }
    
    
    
    return 0;
}