#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n){
	if (n<2) return false;
	for (int i=2;i*i<=n;i++){
		if (n%i==0) return false;
	}
	return true;
}

int main(){
	int n; cin>>n;
	map<int, int> mp;
	for (int i=0;i<n;i++) {
		int x; cin>>x;
		if (isPrime(x)) mp[x]++;
	}
	for(auto it:mp){
		cout<<it.first<<" "<<it.second<<endl;
	}
}
