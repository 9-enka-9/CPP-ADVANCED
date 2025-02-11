#include<bits/stdc++.h>
using namespace std;

int a[] = {2,3,5,7};//so nguyen to duoi 9

bool bs(int k) {
	int l=0, r=3;
	while (l<=r) {
		int m = (l+r)/2;
		if (a[m] == k) {
			return true;
		} else if (a[m]>=k){
			r = m-1;
		} else {
			l = m+1;
		}
	}
	return false;
}

int main() {
	long long n;
	cin>>n;

	int c=0;
	while (n!=0) {
		c+=bs(n%10);
		n/=10;
	}
	cout<<c;
}
