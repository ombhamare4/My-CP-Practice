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
    int a,b,c;

    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<"Alice"<<endl;
    }else if(b>a&&  b>c){
        cout<<"Bob"<<endl;
    }else{
        cout<<"Charlie"<<endl;
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