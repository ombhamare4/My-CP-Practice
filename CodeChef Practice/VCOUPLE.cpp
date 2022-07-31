//VCOUPLE
/*
1
5
2 1 3 5 4
5 3 1 2 4
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
    vll b,g;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b.pb(x);
    }
    
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        g.pb(x);
    }
    
    sort(b.begin(),b.end());
    sort(g.begin(),g.end(),greater<int>());
    
    ll max = 0, like = 0;
    
    for(ll i=0;i<n;i++){
        like = b[i]+g[i];
        if(max<like){
            max = like;
        }
        like = 0;
    }
    
    cout<<max<<endl;
    
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    
    
    return 0;
}