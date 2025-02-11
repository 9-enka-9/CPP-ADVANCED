#include<bits/stdc++.h>
using namespace std;

int main() {
	int k,w;
	long long n;
	cin>>k>>n>>w;
	long long total = k*(w+1)*w/2;
	if (n-total>=0) {
		cout<<0;
	} else {
		cout<<total-n;
	}
}
