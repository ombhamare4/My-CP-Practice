#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    int currentMax = 0;
    
    cin>>n>>k;
//    vector<int> vc;
    int vc[n];
    
    for(int i=0;i<n;i++){
        cin>>vc[i];
    }
    
    int res = 0;
    for(int i=0;i<k;i++){
        res+=vc[i];
    }
    
    currentMax = res;
    for(int i=k;i<n;i++){
        currentMax += vc[i] -vc[i-k];
        res = max(res,currentMax);
    }
    
    cout<<res<<endl;
    
}

int main(){
int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}