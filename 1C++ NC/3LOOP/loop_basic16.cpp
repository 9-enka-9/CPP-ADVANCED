#include<bits/stdc++.h>
using namespace std;

int main () {
	long long n;
	cin>>n;
	bool c=true;
	if (n==0) {
		cout<<"29tech";
		return 0;
	}
	while (n!=0){
		int t=n%10;
		if (t%2==0){
			c=false;
			break;
		}
		n/=10;
	}
	if (c) cout<<"28tech";
	else cout<<"29tech";
}
