//CK87MEDI
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
    ll n,k,total;
    cin>>n>>k;
    vll vc;
    total = n+k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vc.pb(x);
    }
    
    sort(vc.begin(),vc.end());
    
    cout<<vc[(total/2)]<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    
    
    return 0;
}