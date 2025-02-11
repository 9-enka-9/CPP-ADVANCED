#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	int sum;
	while (n!=0) {
		sum+=(n%10);
		n/=10;
	}
	cout<<sum;
}
