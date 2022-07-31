//MAKEPAL2

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
    str s;
    cin>>s;
    stack<int>vc;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            vc.push('1');
        }else if(s[i]='0'){
            vc.push('0');
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