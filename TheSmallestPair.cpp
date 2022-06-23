#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int arr[100000];
 
void solve(){
	int n;
	int res=0;
	int temp=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		res=arr[i]+arr[i+1];
		if(temp>=res){
			temp=res;
		}

	}
	cout<<temp<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
 
	
}