#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	int c1=0, c2=0;
	while (n!=0){
		if ((n%10)%2==0) {
			c2++;
		} else {
			c1++;
		}
		n/=10;
	}
	cout<<c2<< " " << c1;
}
