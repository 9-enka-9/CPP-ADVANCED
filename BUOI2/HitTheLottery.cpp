#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n, times=0;
	cin>>n;
	int a[] = {1,5,10,20,100};
	for (int i=4;i>=0;i--){
		times += n/a[i];
		n=n%a[i];
	}
	cout<<times;
} 
