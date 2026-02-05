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
    int a,b,c,d;

    cin>>a>>b>>c>>d;

    if(a*2+b>c*2+d){
        cout<<"Messi"<<endl;
    }else if(a*2+b<c*2+d){
        cout<<"Ronaldo"<<endl;
    }else{
        cout<<"Equal"<<endl;
    }
}

int main()
{

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}