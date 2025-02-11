#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned long long n;
	unsigned int a,b;
	cin>>n>>a>>b;
	if (a*2<=b){
		cout<<n*a;
	} else {
		if (n%2==0){
			cout<<b*(n/2);
		} else {
			cout<<b*(n/2)+a;
		}
	}
}
