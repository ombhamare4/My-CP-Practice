#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
long int n,a,b,c,k,t,temp,count=0;

void solve(){
    cin>>n;
    int sum = 0;
   map<int,int> mp;
    
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(mp[a] < b){  
            mp[a]=b;
        }
    }
    map<int, int>::iterator itr;
    for(itr=mp.begin();itr!=mp.end();itr++){
        if(itr->first <= 8){
            sum+=itr->second;
        } 
    }
    
    cout<<sum<<endl;
    
}

int main(){

    cin>>t;
    while(t--){
        solve();
    }

   	return 0;
}