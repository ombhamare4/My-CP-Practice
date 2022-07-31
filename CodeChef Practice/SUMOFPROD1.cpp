//SUMOFPROD1


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
    vll  vc;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vc.push_back(x);
    }
    
    
    ll j = 0 , count=0;
    
    while(j<n){
        
        ll product=1;
        
        for(int i=j;i<n;i++){
            product *= vc[j]*vc[i];
//            cout<<"subarray ["<<j+1<<","<<i+1<<"] has product = "<< product<<endl;
             if(product==1){
                count++;
            }
        }  
        j++;
    }
    
    cout<<count<<endl;
}   


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    
    
    return 0;
}