
/*
Not Passed The Case? Try One more Time
*/
#include<bits/stdc++.h>
using namespace std;

#define pb          push_back
#define ll          long long
#define str         string
#define vll         vector<long long>

void solve(){
    ll n;
    cin>>n;
    vll vc(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vc[x-1]++;
    }
    // map<long,long> mp;
    // for(auto &e: vc){
    //     mp[e]++;
    // }

    // if(mp.size()%2==0){
    //     cout<<"YES"<<endl;
    // }else{
    //     cout<<"NO"<<endl;
    // }

    if(n%2==1 && *max_element(vc.begin(),vc.end())==1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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