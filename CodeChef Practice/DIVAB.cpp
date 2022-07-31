//DIVAB

/*
Not Passed The Case? Try One more Time
*/
#include<bits/stdc++.h>
using namespace std;

#define pb          push_back
#define ll          long long
#define str         string
#define vll         vector<long long int>

/*
3
5 2 11
4 3 24
7 7 100
*/
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,n,x;
    cin>>a>>b>>n;
    ll ans;
    
    if(a%b==0 || b==1){
        cout<<-1<<endl;
        continue;
    }
    if(n%a!=0){
        ll rem = n%a;
        n+=a-rem;
    }
    while(n%b==0){
        n+=a;
    }
    
    cout<<n<<endl;
    }
    
    
    return 0;
}