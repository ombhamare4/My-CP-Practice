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
    int x;
    cin >> x;
    int odd = 0;
    int even = 0;

    for (int i = 1; i <= x; i++)
    {
        int div = x / i;
        if (x % i == 0)
        {
            if (div % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }

    cout << odd << " " << even;
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