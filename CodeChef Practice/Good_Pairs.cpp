
/*
Not Passed The Case? Try One more Time
*/
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define str string
#define vll vector<long long int>

// lcm (a*b)/gcd(a,b);

// int gcd(int a, int b)
// {
//     if (b == 0)
//     {
//         return a;
//     }
//     return gcd(b, a % b);
// }

void solve()
{
    int n;
    int count = 0;
    cin >> n;
    vll vc;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vc.pb(x);
    }

    map<long,long>mp;

    for(int i=0;i<vc.size();i++){
        mp[vc[i]]++;
    }

    for(auto e: mp){
        e.second--;
        long val = e.second;
        count+=(val*(val+1))/2;
    }
    

    cout << count << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}