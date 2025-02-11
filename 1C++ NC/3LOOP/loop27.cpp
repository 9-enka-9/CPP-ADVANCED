#include<bits/stdc++.h>
using namespace std;

int main () {
	long long n;
	cin>>n;
	if (n==0) cout<<0;
	else if (n%9==0) cout<<9;
	else cout<<n%9;
}
