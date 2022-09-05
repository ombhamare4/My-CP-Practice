//Calculate frequency of characters in a string

#include<bits/stdc++.h>

using namespace std;


void solve(){
    string str ;
    cin>>str;
    int n = str.size();
    //map will easy
    vector<int> freq(26,0);
    
    for(int i=0;i<n;i++){
        freq[str[i]-'a']++;
    }
    
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            cout<<(char)(i+'a')<<" "<<freq[i]<<",";
        }
    }
    
}

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    
    return 0;
    

}