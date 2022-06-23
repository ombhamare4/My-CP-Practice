#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
//int n,a,b,c,d,k,t,temp,count=0;

void solve(){
    
    int n,d,count= 1;
    
    set<int> days;
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>d;
        days.insert(d);
    }
    cout<<days.size()<<endl;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

   	return 0;
}