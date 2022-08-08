/*Remove Spaces from a String*/

#include<bits/stdc++.h>
#include<string.h>

using namespace std;

void solve(){
    cin.ignore();
    string str;
    
    getline(cin,str);
    
    int n = str.size();
    //bits library
//    remove(str.begin(),str.end(),' ');
    
    int count = 0;
    
    for(int i=0;i<=n;i++){
        if(str[i]!=' '){
            str[count] = str[i];
            count++;
        }
    }
    
    str[count] = '\0';
    

    cout<<str<<endl;
    
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}