#include<bits/stdc++.h>
using namespace std;

int main () {
	long long n;
	cin>>n;
	cout<<(n*(n+1))/2<<endl;
	cout<<n*(n+1)*(2*n+1)/6<<endl;
	long long end=n/3*3;
	cout<<(end-3)/3+1<<endl;
	cout<<((end-3)/3+1) * (end+3)/2;
}
