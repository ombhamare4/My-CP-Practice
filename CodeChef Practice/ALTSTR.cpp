//ALTSTR

#include<bits/stdc++.h>
using namespace std;

#define pb          push_back
#define ll          long long
#define str         string
#define vll         vector<long long int>

void solve(){
    ll n;
    cin>>n;
    str s;
    cin>>s;
    ll ones = 0, zeros= 0;
    ll ans = 1;
    for(int i=0;i<n;i++){
        if(s[i]=='1')
            ones++;
        else if(s[i]=='0')
            zeros++;
    }
    
    ans = min(ones,zeros);
    
    ans = ans*2;
    
    if (max(ones,zeros)>min(ones,zeros)){ 
        ans+=1;
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