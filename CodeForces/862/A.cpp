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
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool found = false;
        for (int x = 0; x < 28; x++) {
            int xor_sum = 0;
            for (int i = 0; i < n; i++) {
                xor_sum ^= a[i] ^ x;
            }
            if (xor_sum == 0) {
                cout << x << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1 << endl;
        }
    
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