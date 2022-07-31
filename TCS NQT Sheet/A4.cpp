/*Reverse a given Array*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {4,5,9,2,1,1,9,4};
    
    int low = 0;
    int high = arr.size()-1;
    
    while(low<=high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
        
         
}