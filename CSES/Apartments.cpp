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
    ll n, m, k;
    cin >> n >> m >> k;

    ll a[n], b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + m);

    int i = 0, j = 0;
    int count = 0;
    while (i < n && j < m) {
        if (b[j] >= a[i] - k && b[j] <= a[i] + k) {
            count++;
            i++;
            j++;
        } else if (b[j] < a[i] - k) {
            j++;
        } else {
            i++;
        }
    }

    cout << count << endl;
}

int main(){

	int t=1;
	// cin>>t;
	while(t--){
		solve();
	}

	return 0;
}