
/*
Not Passed The Case? Try One more Time
*/
#include<bits/stdc++.h>
using namespace std;

#define pb          push_back
#define ll          long long
#define str         string
#define vll         vector<long long int>

int sumh(int h){
    return (h*(h+1))/2;
}

void solve(){
    ll n;
    cin>>n;

    int h=1;

    while(sumh(h)<=n){
        h++;
    }

    cout<<h-1<<endl;
    
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    
    
    return 0;
}