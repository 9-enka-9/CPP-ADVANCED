#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	while (b){
		int t=a;
		a=b;
		b=t%b;		
	}
	return a;
}

int main(){
	int n; cin>>n;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	int old=a[0];
	for (int i=1;i<n;i++){
		old=gcd(old,a[i]);
	}
	cout<<old;
}
