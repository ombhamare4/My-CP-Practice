
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
    vll vc1,vc2,ans;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vc1.pb(x);
    }

    ll k;
     unordered_map<long,long> mp;
    cin>>k;
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        mp[x]++;
    }

    for(int i=0;i<n;i++){
        if(mp[vc1[i]]==0){
            cout<<vc1[i]<<" ";
        }
    }
    



    cout<<endl;

    
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    
    
    return 0;
}