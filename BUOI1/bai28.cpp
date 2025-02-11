#include<bits/stdc++.h>
using namespace std;

int main() {
	double a,b,c;
	cin>>a>>b>>c;
	double delta = b*b - 4*a*c;
	if (delta>0) {
		double res1, res2;
		res1 = (-b+sqrt(delta))/(2*a);
		res2 = (-b-sqrt(delta))/(2*a);
		cout<<setprecision(2)<<fixed<<res1<<" "<<res2;
	} else if (delta==0){
		double res = -b/(2*a);
		cout<<setprecision(2)<<fixed<<res;
	} else {
		cout<<"NO";
	}
}
