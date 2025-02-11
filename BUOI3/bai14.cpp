#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	int sum1=0, sum2=0;
	while (n!=0){
		if ((n%10)%2==0) {
			sum2+=n%10;
		} else {
			sum1+=n%10;
		}
		n/=10;
	}
	cout<<sum2<< " " << sum1;
}
