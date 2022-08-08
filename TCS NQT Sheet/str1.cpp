#include<bits/stdc++.h>

using namespace std;

void solve(){
    bool ans = false;
    string str,temp;
    cin>>str;
//    temp = str;
//    reverse(temp.begin(),temp.end());
//    if(temp==str){
//        cout<<true<<endl;
//    }else{
//        cout<<false<<endl;
//    }
    
    int left = 0;
    int right = str.size()-1;
    
    while(left<right){
        if(str[left]==str[right]){
            continue;
        }else{
            ans = false;
            break;
        }
        
        left++;
        right--;
    }
    
    cout<<ans<<endl;
    
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}