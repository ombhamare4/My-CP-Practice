//BOBBANK-SEP221C


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
    ll w,x,y,z;
    cin>>w>>x>>y>>z;

    while(z--){ 
        w+=x-y;
    }

    cout<<w<<endl;
    
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    
    
    return 0;
}