#include<bits/stdc++.h>

using namespace std;

int main(){

    int r,c;
    cin>>r>>c;
    
    for(int i=0;i<r;i++){
        int k=1;
        for(int j=c;j>i;j--){
            cout<<k<<" ";
            k++;
        }
        
        cout<<endl;
    }
    
return 0;
}

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/