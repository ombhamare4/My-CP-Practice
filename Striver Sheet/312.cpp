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
    
    int largest=vc[0],secondLargest=vc[0];
    
    for(int i=0;i<n-1;i++){
        if(vc[i+1]>vc[i]){
            secondLargest = largest;
            largest = vc[i+1];
        }
    }
    
    cout<<secondLargest<<endl;
}

int main(){
    
    int t;
    
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}