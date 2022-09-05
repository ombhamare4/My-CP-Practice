#include<bits/stdc++.h>

using namespace std;

int main(){

    int r,c;
    cin>>r>>c;
    
    for(int i=0;i<r;i++){
        for(int j=c;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    
return 0;
}


/*
*****
****
***
**
*
*/