//SIMPSTAT


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
    ll n,k;
    float ans;
    cin>>n>>k;
    vll vc;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vc.pb(x);
    }
    
    sort(vc.begin(),vc.end());
    
    double sum=0;
    
    for(int i=k;i<=(n-1)-k;i++){
        sum+=vc[i];
    }
    
    ll div = n-(2*k);
    ans = sum/div;
    
    cout<<fixed<<setprecision(6)<<ans<<endl;
}   


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    
    
    return 0;
}