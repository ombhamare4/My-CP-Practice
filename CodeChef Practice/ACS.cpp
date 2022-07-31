#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
int n,a,b,c,d,k,t,temp;
string s1,s2;
void solve(){
    cin>>a;
    
    int rem = a%100;
    
    int q = a/100;
    
    int ans = rem+q;
    
    if(ans<=10){
        cout<<ans<<endl;
    }else{
        cout<<-1<<endl;
    }
}

int main(){

    cin>>t;
    while(t--){
        solve();
    }

   	return 0;
}