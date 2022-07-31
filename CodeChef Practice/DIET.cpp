#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
long int n,a,b,c,k,t,temp,count=0;

void solve(){
    cin>>n>>k;
    int ans = 1;
    int day = 0;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]>=k){
            temp = arr[i]-k;
            arr[i+1]+= temp;
        }else{
            ans = 0;
            day = i+1;
            break;
        }
    }
    
    if(ans){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO "<<day<<endl;
    }
}

int main(){

    cin>>t;
    while(t--){
        solve();
    }

   	return 0;
}