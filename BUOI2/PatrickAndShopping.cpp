#include<bits/stdc++.h>
using namespace std;

int main() {
	long long d1,d2,d3, res=0, a1,a2,a3,a4;
	cin>>d1>>d2>>d3;
	a1 = d1+d2+d3;
	a2 = d1*2+d2*2;
	a3 = d1*2+d3*2;
	a4 = d2*2+d3*2;
	res = min(a1,min(a2,min(a3,a4)));
	cout<<res;
}
