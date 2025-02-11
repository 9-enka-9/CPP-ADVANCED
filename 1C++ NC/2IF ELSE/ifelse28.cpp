#include<bits/stdc++.h>
using namespace std;

int main () {
	double n,u1,d;
	cin>>n>>u1>>d;
	cout<<fixed<<setprecision(0)<<n*(2*u1+(n-1)*d)/2;
}
