#include<bits/stdc++.h>
using namespace std;

int main () {
	double a,b;
	char x;
	cin>>a>>b>>x;
	cout<<a<<" "<<x<<" "<<b<<" = "<<fixed<<setprecision(0);
	switch (x){
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		case '%':
			cout<<(int)a%(int)b;
			break;
		default:
			cout<<fixed<<setprecision(2)<<a/b;
	}	
}
