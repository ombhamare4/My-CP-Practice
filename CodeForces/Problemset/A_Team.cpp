#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

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

typedef map<int, int> mii;
typedef priority_queue<int> pqi;
typedef queue<int> qi;

#define mp make_pair
#define pb push_back
#define f first
#define s second

void solve(){
    ll x,ans=0;
    cin>>x;

    while(x--){
        ll a,b,c,currCount=0;
        cin>>a>>b>>c;
        if(a>0){
            currCount++;
        }
        if(b>0){
            currCount++;
        }
        if(c>0){
            currCount++;
        }
        if(currCount>1){
            ans++;
        }
    }

    cout<<ans<<endl;
}

int main()
{
    int t;
    t =1;
    // cin>>t;
    while(t--){
        solve();
    }

    return 0;
}