/*Find the smallest number in an array*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr1 = {2,5,1,3,0};
    sort(arr1.begin(),arr1.end());
    cout<<arr1[0]<<endl;
}