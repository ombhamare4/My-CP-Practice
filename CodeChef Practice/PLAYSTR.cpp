#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
long int n,a,b,c,k,t,temp;
string s1,s2;
void solve(){
    s1="";
    s2="";
    
    int count1 = 0;
    int count2 = 0;
    cin>>n;
    
    cin>>s1;
    cin>>s2;
    
    count1 = count(s1.begin(),s1.end(),'1');
    count2 = count(s2.begin(),s2.end(),'1');
    
    
    if(count1==count2){
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