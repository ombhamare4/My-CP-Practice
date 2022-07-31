/*Count frequency of each element in the array*/

/*Reverse a given Array*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {4,5,9,2,1,1,9,4};
    int n = arr.size();
    //Map Easy
//        map<int,int>mp;
//        for(int i=0;i<arr.size();i++){
//            mp[arr[i]]++;
//        }
    
//        for(auto e: mp){
//            cout<<e.first<<" -> "<<e.second<<endl;
//        }
//    for(auto e: mp){
//            cout<<e.first<<" -> "<<e.second<<endl;
//        }
//    
    //No Inbuild DataStructure
    //Frequency array
    
    vector<bool> freq(n,false);
    for(int i=0;i<n;i++){
        if(freq[i]==true){
            continue;
        }
        
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                freq[j] =true;
                count++;
            }
        }
        
        cout<<arr[i]<<" -> "<<count<<endl;
        
    }
    
         
}