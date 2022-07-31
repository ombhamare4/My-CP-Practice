//grosssalary
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
int a[100000];
int main(){
	int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        long double exp;
        if (n >= 1500)
        {
            exp = n + (0.98 * n) + 500;
            printf("%.2Lf\n", exp);
        }
        else
            cout << 2 * n << endl;
    }
    return 0;
 
}