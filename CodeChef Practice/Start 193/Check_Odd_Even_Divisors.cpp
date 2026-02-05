#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef long long ull;
typedef long double ld;
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
#define YES "YES"
#define NO "NO"
#define Yes "Yes"
#define No "No"

void solve()
{
    int x, y, odd, even;
    cin >> x >> y;

    if (x == 0 && y == 0)
    {
        cout << No;
    }
    else if (x == 0)
    {
        cout << No;
    }
    else if (y % x == 0)
    {
        cout << Yes;
    }
    else
    {
        cout << No;
    }
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }

    return 0;
}