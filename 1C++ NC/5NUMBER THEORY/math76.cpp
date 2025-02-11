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

int lcm(int a, int b){
	return a/gcd(a,b)*b;
}

int main(){
	int a,b,c,d; cin>>a>>b>>c>>d;
	int res1=gcd(gcd(a,b),gcd(c,d));
	int res2=lcm(lcm(a,b),lcm(c,d));
	cout<<res1<<" "<<res2;	
}
