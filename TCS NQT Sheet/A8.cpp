/*Rotate array by K elements : Block Swap Algorithm*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(auto&itr: arr){
        cin>>itr;
    }
    
    int low=0;
    int mid=k-1;
    int end = n-1;
    while(low<=mid){
        swap(arr[low],arr[mid]);
        low++;
        mid--;
    }
    
    while(k<=end)
    {
        swap(arr[k],arr[end]);
        k++;
        end--;
    }
    reverse(arr.begin(),arr.end());
    for(auto&e: arr){
        cout<<e<<" ";
    }
    
    
}