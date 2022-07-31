#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
int n,a,b,c,d,k,t,temp;
string s1,s2;
void solve(){
    cin>>s1;
    int len = s1.length();
    
    int cOnes = 0;
    int cZeros = 0;
    
    for(int i=0;i<len;i++){
        if(s1[i] == '1'){
            cOnes++;
        }else if(s1[i]=='0'){
            cZeros++;
        }
    }
    
    cout<<cOnes<<" "<<cZeros<<endl;
    
    if(cOnes==1 || cZeros == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    
}

int main(){

    cin>>t;
    while(t--){
        solve();
    }

   	return 0;
}