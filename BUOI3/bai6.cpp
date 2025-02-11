#include<bits/stdc++.h>
using namespace std;

int main() {
	double n,s;
	cin>>n;
	s = 0;
	int t = -1;
	for (int i=1; i<=n;i++) {
		s+=(i*t);
		t*=-1;
	}
	cout<<s;
}
