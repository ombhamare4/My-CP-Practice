//DNASTRAND

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s1;
    cin>>n;
    cin>>s1;
    for(int i=0;i<n;i++){
        switch(s1[i]){
            case 'A':
                s1[i] = 'T';
                break;
            case 'T':
                s1[i] = 'A';
                break;
            case 'G':
                s1[i] = 'C';
                break;
            case 'C':
                s1[i] = 'G';
                break;
        }
    }
    cout<<s1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

   	return 0;
}