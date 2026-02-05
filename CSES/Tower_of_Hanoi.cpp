#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef long long ull;
typedef long double ld;
#define pb push_back
#define pob pop_back
#define ff first
#define ss second

void moveDisk(int n, int from, int to, int aux)
{
    if (n == 1)
    {
        cout << from << " " << to << endl;
        return;
    }

    moveDisk(n - 1, from, aux, to);
    cout << from << " " << to << endl;
    moveDisk(n - 1, aux, to, from);
}
void solve()
{
    int n;
    cin >> n;
    // The minimum number of moves required to solve Tower of Hanoi with n disks is: 2^n - 1
    cout << pow(2, n) - 1 << endl;

    moveDisk(n, 1, 3, 2);
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