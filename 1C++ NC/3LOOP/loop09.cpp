#include<bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin>>n;
	long long s=1;
	for (int i=1;i*i<=n;i++){
		if (n%i==0){
			s*=i;
			if (n/i!=i) s*=(n/i);
		}
	}
	cout<<s;
}
