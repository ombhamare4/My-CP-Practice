#include<bits/stdc++.h>

using namespace std;

void solve(){
    long long int n,m,a,b,c;
    long long count = 0,product=1;
    vector<int> vc;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vc.push_back(x);
    }
    bool ans = false;
    for(int i=0;i<n-1;i++){
        if(vc[i]<=vc[i+1]){
            ans = true;
        }else{
            ans = b
        }
    }
}

int main(){
    
    int t;
    
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}