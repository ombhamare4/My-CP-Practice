//Grade_The_Steel.cpp 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
long int n,a,b,c,k,t,temp;

void solve(){
    double h,c,ten;
    cin >> h >>c>>ten;
    if(h>50 && c < 0.7 && ten>5600){
        cout<<"10"<<endl;
    }
    else if(h>50 && c<0.7){
        cout<<"9"<<endl;
    }
    else if(h>50 && ten>5600){
        cout<<"7"<<endl;
    }
    else if(c<0.7 && ten>5600){
        cout<<"8"<<endl;
    }else if(c<0.7 || ten>5600 || h>50){
        cout<<"6"<<endl;
    }
    else{
        cout<<"5"<<endl;
    }

}

int main(){
    
    cin>>t;
    while(t--){
        solve();
    }

   	return 0;
}