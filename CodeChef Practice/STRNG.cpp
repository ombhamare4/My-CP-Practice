#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
int n,a,b,c,d,k,t,temp;
string s1,s2;

int gcd(int a,int b){
    int gcd;
    while(b!=0){
        temp = b;
        b = a%b;
        a = temp;
    }
    gcd = a;
    return gcd;
}

void solve(){
    cin>>a;
    int arr[a];
    int front[a];
    int back[a];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    front[0]=arr[0];
    back[n-1] = arr[n-1];

    for(int i=1;i<n;i++){
        front[i] = gcd(front[i-1],arr[i]);    
    }
    
    for(int i=n-2;i>=0;i--){
        back[i] = gcd(back[i+1],arr[i]);
    }
    
    for(int i=0;i<n;i++){
        int gcdx = 0;
        
        if(
    }
}

int main(){

    cin>>t;
    while(t--){
        solve();
    }

   	return 0;
}