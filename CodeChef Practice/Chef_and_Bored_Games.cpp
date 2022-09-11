
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
    int ans;
    for(int i=0;i<n/2;i++){
        int val = (n-2*i);
        ans = pow(val,2);
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