/*Calculate Sum of the Elements of the Array*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto&it:arr){
        cin>>it;
    }
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
}