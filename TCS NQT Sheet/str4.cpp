/*Remove all vowels from the String*/

#include<bits/stdc++.h>

using namespace std;

void solve(){
    bool ans = false;
    string str,temp;
    cin>>str;
    
    int len = str.size();
    
    for(int i=0;i<len;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i] == 'o' || str[i] =='u'){
            str = str.substr(0,i) + str.substr(i+1);
            i--;
        }
    }
    
    cout<<str<<endl;
    
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}