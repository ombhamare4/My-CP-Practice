/*Remove characters from a string except alphabets*/

#include<bits/stdc++.h>
#include<string.h>

using namespace std;

void solve(){
    cin.ignore();
    string str;
    
    getline(cin,str);
    
    int n = str.size();

    //bits lib
    // reverse(str.begin(),str.end());
    
    int start = 0;
    int end = n-1;
    
    while(start<end){
        
        swap(str[start],str[end]);
        
        start++;
        end--;
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