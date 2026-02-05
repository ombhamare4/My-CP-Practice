/*
Not Passed The Case? Try One more Time
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
typedef string str;

typedef pair<int, int> ii;
typedef tuple<int, int, int> iii;

typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ld> vd;
typedef vector<ll> vl;

typedef set<int> si;
typedef set<ii> sii;
typedef set<ld> sd;
typedef set<ll> sl;

typedef map<int, int> mp;
typedef priority_queue<int> pqi;
typedef queue<int> qi;

#define mp make_pair
#define pb push_back
#define f first
#define s second

void solve()
{
    int n;
    cin >> n;
    ll totalSum = (ll)n * (n + 1) / 2;

    if (totalSum % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    vi set1, set2;
    ll target = totalSum / 2;
    ll sum1 = 0;

    // Greedy approach: go from n down to 1, add to set1 if it doesn't exceed target
    for (int i = n; i >= 1; i--)
    {
        if (sum1 + i <= target)
        {
            set1.pb(i);
            sum1 += i;
        }
        else
        {
            set2.pb(i);
        }
    }

    cout << set1.size() << endl;
    for (auto x : set1)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << set2.size() << endl;
    for (auto x : set2)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}