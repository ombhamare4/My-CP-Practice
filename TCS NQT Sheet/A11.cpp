/*Remove Duplicates in-place from Sorted Array*/

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
    
    //two pointer method
    sort(arr.begin(),arr.end());
    int j=0;
    for(int i=1;i<n;i++){
        if(arr[j]!=arr[i]){
            j++;
            arr[j]=arr[i];
        }
    }
    
    for(int i=0;i<=j;i++){
        cout<<arr[i]<<" ";
    }
    
}