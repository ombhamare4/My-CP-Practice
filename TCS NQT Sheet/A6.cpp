/*Rearrange array in increasing-decreasing order*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto& e: arr){
        cin>>e;
    }
    int mid = n/2;
    int end = n-1;
    sort(arr.begin(),arr.end());
    while(mid<=end){
        swap(arr[mid],arr[end]);
        mid++;
        end--;
    }
    
    for(auto& e: arr){
        cout<<e<<" ";
    }
}
