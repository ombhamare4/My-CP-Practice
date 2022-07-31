#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
long int n,a,b,c,k,t,temp,count=0;

void solve(){
    cin>>n>>k;
    
    if(n%2 == 0 || n%2 == 1 && k%2==1) {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){

    cin>>t;
    while(t--){
        solve();
    }

   	return 0;
}