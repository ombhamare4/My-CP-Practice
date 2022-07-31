//HORSES


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
    ll n;
    cin>>n;
    vll vc;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vc.pb(x);
    }
    
    sort(vc.begin(),vc.end());
    
    ll ans = INT_MAX;
    
    for(int i=0;i<n-1;i++){
        if(vc[i+1]-vc[i]<ans){
            ans  = (vc[i+1]-vc[i]);
        }
    }
    
    cout<<ans<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    
    
    return 0;
}