//NAME1
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
    
    string a,b;
    cin>>a>>b;
    ll n;
    cin>>n;
    
    vector<string>vc;
    map<string,string>mp;
    string x = a+b;
    string y = "";
    
    for(int i=0;i<n;i++){
        string q;
        cin>>q;
        y+=q;
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