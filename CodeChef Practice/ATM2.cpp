
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
long int n,a,b,c,k,t,temp;

void solve(){
    cin>>n>>k;
    vector<int> vc;
    for(int i=0;i<n;i++){
        cin>>a;
        vc.push_back(a);
    }
    for(int i=0;i<n;i++){
        if(k>=vc[i]){
            cout<<'1';
            k-=vc[i];
        }else{
            cout<<'0';
        }
    }
    cout<<endl;
}

int main(){

    cin>>t;
    while(t--){
        solve();
    }

   	return 0;
}