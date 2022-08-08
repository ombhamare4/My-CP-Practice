/*Remove characters from a string except alphabets*/

#include<bits/stdc++.h>
#include<string.h>

using namespace std;

void solve(){
    cin.ignore();
    string str;
    
    getline(cin,str);
    
    int n = str.size();

    string ans;
    
    for(int i=0;i<n;i++){
        int a = int(str[i]);
        
        if((a>=65 && a<=90)||(a>=97 && a<=122)){
            ans.push_back(str[i]);
        }
        
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