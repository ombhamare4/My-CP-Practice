
/*
Not Passed The Case? Try One more Time
*/
#include<bits/stdc++.h>
using namespace std;

#define pb          push_back
#define ll          long long
#define str         string
#define vll         vector<long long int>

//void solve(){
//    ll n;
//    cin>>n;
//}

void solve(){
    ll n;
    cin>>n;
    vll vc(n);
    for(auto&it: vc){
        cin>>it;
    }
    
    ll boast=0;
    
    for(int i=0;i<n-1;i++){
        ll less=0,max=0;
        for(int j=1;j<n;j++){
            if(vc[i]<=vc[j]){
                less++;
            }
            if(vc[i]>vc[j]){
                max++;
            }
            
            if(less>max){
                boast++;
            }
               
            
        }
    }
    cout<<boast<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    
    
    return 0;
}