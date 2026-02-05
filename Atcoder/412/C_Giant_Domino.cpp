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
    int N;
    cin >> N;
    vector<int> S(N);
    for (int i = 0; i < N; ++i) {
        cin >> S[i];
    }

    if (S[N-1] > 2 * S[0]) {
        cout << -1 << '\n';
        return;
    }

    int res = 2;
    int current = 0;
    int last = N - 1;

    while (current < last) {
        int next = last;
        if (S[next] > 2 * S[current]) {
            cout << -1 << '\n';
            return;
        }
        while (next > current + 1) {
            if (S[next - 1] <= 2 * S[current]) {
                next--;
            } else {
                break;
            }
        }
        res++;
        current = next;
    }

    cout << res << '\n';
}

int main(){

	int t=1;
    cin>>t;
	while(t--){

		solve();

	}

	return 0;
}