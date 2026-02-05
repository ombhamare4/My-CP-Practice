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
    string str;
    cin>>str;
    int n = str.size();

    if(n>10){

        cout<<str[0]<<to_string(n-2)<<str[n-1]<<endl;
    }else{
        cout<<str<<endl;
    }

}

int main()
{
    int t;
    // t =1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}