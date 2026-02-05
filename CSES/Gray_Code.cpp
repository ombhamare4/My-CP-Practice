#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < pow(2, n); i++)
    {
        int gray = i ^ (i >> 1);
        bitset<16> b(gray);
        string s = b.to_string().substr(16 - n);
        cout << s << endl;
    }
}
int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}