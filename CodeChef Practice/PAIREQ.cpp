#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
int n,a,b,c,d,k,t,temp;
string s1,s2;
void solve(){
    int count = 0;
    map<int,int> mp;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
       cin>>arr[i];
        mp[arr[i]]++;
    }   
    
    int ans = 0;
    
    for(auto e : mp){
        ans = max(ans,e.second);
    }
    

    cout<<n-ans<<endl;
}

int main(){

    cin>>t;
    while(t--){
        solve();
    }

   	return 0;
}