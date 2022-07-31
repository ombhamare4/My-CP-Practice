/*Find Median of the given Array*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    
    sort(arr.begin(),arr.end());
    for(auto&itr:arr){
        cin>>itr;
    }
    double ans;
    if(n%2==0){
        int left = (n/2)-1;
        int right = (n/2);
        cout<<(double)(arr[left]+arr[right])/2; 
    }else{
        cout<<arr[n/2];
    }
    
//    cout<<ans<<endl;
}