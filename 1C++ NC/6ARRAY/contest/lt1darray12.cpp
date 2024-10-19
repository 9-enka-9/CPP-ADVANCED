#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	while (b){
		int t=a%b;
		a=b;
		b=t;
	}	
	return a;
}

int main(){
	int n;
	cin>>n;
	int a[n+5];
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	int m=gcd(a[1],a[2]);
	for (int i=1;i<=n-1;i++){
		for (int j=i+1;j<=n;j++){
			m=max(m, gcd(a[i],a[j]) );
		}
	}
	cout<<m;
}
