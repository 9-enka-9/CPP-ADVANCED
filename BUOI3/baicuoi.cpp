#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n+1];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	long long s1=0,s2=0;
	for (int i=0;i<n;i++){
		s1 += a[i];
		s2 += a[i]*a[i];
	}
	s1*=s1;
	cout<<(s1-s2)/2;
}
