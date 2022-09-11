#include<bits/stdc++.h>

using namespace std;

void solve(){
    long long int n,m,a,b,c;
    long long count = 0,product=1;
    vector<int> vc;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vc.push_back(x);
    }
    
    sort(vc.begin(),vc.end());
    
    cout<<vc[n-1]<<endl;
}

int main(){
    
    int t;
    
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}