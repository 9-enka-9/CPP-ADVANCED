#include<bits/stdc++.h>
using namespace std;

int tg(double a, double b, double c) {
	if (a<=0 or b<=0 or c<=0) {
		return 0;
	} else if ((a+b)>c and (b+c)>a and (a+c)>b) {
		return 4;	
	}
	return 0;
}

int main() {
	double a,b,c;
	cin>>a>>b>>c;
	int res=0;
	res = tg(a,b,c);
	double aa=a*a, bb=b*b, cc=c*c;
	if (res == 0) {
		cout<<"INVALID";
	} else if (a==b and b==c and c==a) {
		cout<<1;
	} else if (a==b or b==c or a==c) {
		cout<<2;
	} else if (aa==bb+cc or bb==aa+cc or cc==bb+aa) {
		cout<<3;
	} else {
		cout<<res;
	}
}
