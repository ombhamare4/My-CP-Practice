#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int a=-500,b=y,c=3*x-b-a;
	    cout<<a<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}
