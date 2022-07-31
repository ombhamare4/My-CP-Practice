//PASSTHEEXAM
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll sum=0;
    if(a>=10&&b>=10&&c>=10){
        sum = a+b+c;
    }
    
    if(sum>=100){
        cout<<"Pass"<<endl;
    }else{
        cout<<"Fail"<<endl;
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