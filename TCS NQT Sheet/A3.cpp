/*Find Second Smallest and Second Largest Element in an array*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {4,5,9,2,1,1,9,4};
    sort(arr.begin(),arr.end());

    int high = arr[arr.size()-1];
    int low = arr[0];
    
    int slow = INT_MAX;
    int shigh = INT_MIN;
    
    for(int i=1;i<arr.size()-1;i++){
        if(arr[i]<slow && low!=arr[i]){
            slow = arr[i];
        }
        
        if(arr[i]>shigh && high!=arr[i]){
            shigh = arr[i];
        }
    }
    
    cout<<slow<<" "<<shigh<<endl;    
        
         
}