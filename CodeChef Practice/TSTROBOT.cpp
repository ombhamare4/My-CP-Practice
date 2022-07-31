#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
long int n,a,b,c,d,k,t,temp;
string s1,s2;

int solve(){
    int count = 0;
    set<int> ans;
    
    cin>>n>>a;
    cin>>s1;

    ans.insert(a);
    for(int i=0;i<n;i++){
        if(s1[i] == 'R'){
            a++;
        }else if(s1[i]=='L'){    
            
            a--;
        }
        ans.insert(a);
    }
    
    cout<<ans.size()<<endl;
    
    return 0;
}   

int main(){

    cin>>t;
    while(t--){
        solve();
    }

   	return 0;
}