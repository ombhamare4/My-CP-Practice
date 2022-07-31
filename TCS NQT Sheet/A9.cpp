#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto&itr : arr){
        cin>>itr;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    
    cout<<sum/n<<endl;
}