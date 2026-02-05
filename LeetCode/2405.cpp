#include<bits/stdc++.h>
using namespace std;

typedef long long int ll; 
typedef unsigned long long ull;
typedef long double ld;
#define pb push_back
#define pob pop_back
#define ff first
#define ss second

class Solution {
public:
    int partitionString(string s) {
		int ans = 1;
		set<char> st;
		for(auto c : s){
			if(st.find(c)!=st.end()){
				st.clear();
				ans++;
			}
			st.insert(c);
		}

        return ans;
    }
};

int main() {
    Solution sol;
    string s ;
	cin>>s;
    int ans = sol.partitionString(s);
    cout<< ans << endl;
    return 0;
}
