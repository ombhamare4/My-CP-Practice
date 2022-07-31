//MIXCOLOR

/*
3
3
1 2 3
3
2 1 2
3
1 1 1
*/

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
    vll vc(n);
    map<int,int> mp;
    for(auto&it :vc){
        cin>>it;
        mp[it]++;
    }
    
    ll ans = 0;
    for(auto e: mp){
        if(e.second>1){
            ans+=e.second-1;
        }
    }
    
    cout<<ans<<endl;
    
//    for(auto&it :vc){
//        cout<<it<<" ";
//    }
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    
    
    return 0;
}