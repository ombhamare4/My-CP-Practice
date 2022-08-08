/*Count number of vowels, consonants, spaces in String*/

#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s1;
    cin>>s1;
    
    int vo = 0;
    int white=0;
    int cons=0;
    
     for (int i = 0; i < s1.size(); i++) // converting given string to lowercase
      {
        s1[i] = towlower(s1[i]);
      }
    
    for(int i=0;i<s1.size();i++){
        if(s1[i]==' '){
            white++;
        }else if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]== 'o' || s1[i]=='u'){
            vo++;
        }else{
            cons++;
        }
    }
    
    cout<<vo<<" "<<cons<<" "<<white<<endl;
}

int main(){
int t;
    cin>>t;
    while(t--){
        solve();
    }

}