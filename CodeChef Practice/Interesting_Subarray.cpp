
/*
Not Passed The Case? Try One more Time
*/
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define str string
#define vll vector<long long>

void solve()
{
    ll n;
    cin >> n;
    vll pvc, nvc,vc;


    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vc.pb(x);
    }

    ll minVal = INT_MAX, maxVal = INT_MIN;

    for(int i=0;i<n;i++){
        minVal=min(minVal,vc[i]);
        maxVal=max(maxVal,vc[i]);
    }

    cout<<pow(minVal,2)<<" "<<pow(maxVal,2)<<endl;


    // int maximum = -1;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     if (x >= 0)
    //     {

    //         pvc.pb(x);
    //     }
    //     else
    //     {

    //         nvc.pb(x);
    //     }

    //     x *= x;
    //     maximum = max(maximum, x);
    // }

    // sort(pvc.begin(), pvc.end());
    // sort(nvc.begin(), nvc.end());

    // if (nvc.size() == 0)

    //     cout << pvc[0] * pvc[0];
    // else if (pvc.size() == 0)
    //     cout << nvc[nvc.size() - 1] * nvc[nvc.size() - 1];
    // else
    //     cout << nvc[0] * pvc[pvc.size() - 1];

    // cout << " " << maximum << endl;
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