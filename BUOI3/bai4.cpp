#include<bits/stdc++.h>
using namespace std;

int main() {
	double n;
	cin>>n;
	double s=1;
	for (int i =2; i<=n;i++){
		s+=(1.0/i);
	}
	cout<<fixed<<setprecision(3)<<s;
}
