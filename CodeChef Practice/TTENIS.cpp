//TTENIS

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define str string

void solve(){
    str a;
    cin>>a;
    ll len = a.length();
    int ans=0;
    for(int i=0;i<len;i++){
        if(a[i]=='1'){
          ans++;
        }
    }
    
    if(ans>len/2){
        cout<<"WIN"<<endl;
    }else{
        cout<<"LOSE"<<endl;
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