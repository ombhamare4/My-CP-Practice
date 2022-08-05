/*Maximum product subarray in an array*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    //set vala easy so skip that method
    
    vector<int> arr(n);
    for(auto&itr:arr){
        cin>>itr;
    }
    
    int ans = INT_MIN;
    
    for(int i=0;i<n;i++){
        int  product = 1;
        for(int j=i+1;j<n;j++){
            product*=arr[j];
            
            if(ans<product){
                ans = product;
            }
        }
        
    }
    cout<<ans<<endl;
}