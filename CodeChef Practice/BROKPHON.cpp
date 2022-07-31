#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,count=0;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
       
            if(arr[i]!=arr[i+1]){
                count++;
            }
        
        
        if(arr[i]!=arr[i-1]){
            count++;
        }
    }
    
    cout<<count<<endl;
    
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

   	return 0;
}