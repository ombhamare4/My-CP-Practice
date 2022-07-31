#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
int n,a,b,c,d,k,t,temp;
string s1,s2;
void solve(){
    
    int ans = 1;
    
    cin>>n>>a;
    
    int arr[n];
    
    int count = 0;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int maxSum = 0, currentSum = 0;
    
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            if(arr[i]+arr[i+1]>a){
                ans = 0;
                break;
            }else{
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    
    if(ans==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}

int main(){

    cin>>t;
    while(t--){
        solve();
    }

   	return 0;
}