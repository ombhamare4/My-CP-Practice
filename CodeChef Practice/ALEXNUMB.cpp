//ALEXNUMB


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
    
    ll count = 0;
    sort(vc.begin(),vc.end());
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(vc[i]<vc[j]){
                count++;
            }
        }
    }
    
    cout<<count<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    
    
    return 0;
}