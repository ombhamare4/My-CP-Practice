
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
    ll x,y,n,r;
    cin>>x>>y>>n>>r;
    
    if((r/y)>=n){
        cout<<0<<" "<<n<<endl;
    }
    else if ((r/x)<n){
        cout<<-1<<endl;
    }
    else{
        ll g = y*n;
        ll f = (x-y);
        ll m =(r-g)/f;
        if((r-(g))%f !=0){  
            m+=1;
        }
        cout<<m<<" "<<n-m<<endl;
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