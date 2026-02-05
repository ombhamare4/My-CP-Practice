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
    int a;
    cin>>a;

    if(a<=70){
        cout<<0<<endl;
    }else if(a>70 && a<=100){
        cout<<500<<endl;
    }else{
        cout<<2000<<endl;
    }
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}