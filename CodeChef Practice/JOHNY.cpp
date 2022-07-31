//JOHNY

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
    ll n,k,s;
    cin>>n;
    vll vc;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vc.pb(x);
    }
    
    cin>>k;
    
    s = vc[k-1];
    
    sort(vc.begin(),vc.end());
    
    for(int i=0;i<n;i++){
        if(s==vc[i]){
            cout<<i+1<<endl;
        }
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