#include<bits/stdc++.h>

using namespace std;
typedef long long int ll; 
typedef unsigned long long ull;
typedef long double ld;
#define pb push_back
#define pob pop_back
#define ff first
#define ss second

void solve(){
		int n;
        string s;
        cin >> n >> s;
        char min_char = s[0];
        int min_char_index = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] < min_char) {
                min_char = s[i];
                min_char_index = i;
            }
        }
     
	    string result = s;
        result.erase(min_char_index, 1);
        result.insert(0, 1, min_char);
        cout << result << endl;
    
}  

int main(){
	
	int t=1;
	cin>>t;
	int casez = 1;
	while(t--){
		// cout<<"Case"<<casez<<" ";
		solve();
		casez++;
		
	}
	
	return 0;
}