//OJUMPS


/*
Not Passed The Case? Try One more Time
*/
#include<bits/stdc++.h>
using namespace std;

#define pb          push_back
#define ll          long long
#define str         string
#define vll         vector<long long int>


int main(){
   ll n;
    cin>>n;
    if(n%6==0 || n%6==1 || n%6==3 || n!=0){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    
    return 0;
}