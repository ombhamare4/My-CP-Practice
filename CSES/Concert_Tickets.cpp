#include<bits/stdc++.h>
/*
sorts the ticket prices in ascending order.
Then, for each customer, it uses the upper_bound function to find the
first ticket price that exceeds the customer's maximum price.
If such a ticket exists, it means that the customer can buy a ticket with a
price less than or equal to their maximum price.
The code then decrements the iterator to get the price of the ticket that
the customer will buy, prints the price, and removes the ticket from the vector.
If no such ticket exists, it means that the customer cannot buy any ticket,
so the code prints -1.
This solution has a time complexity of O(n log n + m log n)
due to the sorting and the use of upper_bound, where n is the
number of tickets and m is the number of customers.
The space complexity is O(n) for storing the ticket prices.
*/
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
#define pb push_back
#define pob pop_back
#define ff first
#define ss second

void solve() {
    ll n, m;
    cin >> n >> m;

    multiset<ll> tickets;
    for (int i = 0; i < n; i++) {
        ll price;
        cin >> price;
        tickets.insert(price);
    }

    for (int i = 0; i < m; i++) {
        ll maxPrice;
        cin >> maxPrice;

        auto it = tickets.upper_bound(maxPrice);
        if (it == tickets.begin()) {
            cout << -1 << endl;
        } else {
            it--;
            cout << *it << endl;
            tickets.erase(it);
        }
    }
}


int main(){

	int t=1;
	// cin>>t;
	while(t--){
		solve();
	}

	return 0;
}