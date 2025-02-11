#include<bits/stdc++.h>
using namespace std;

int main () {
	int a,b;
	cin>>a>>b;
	cout<<a+b<<endl;
	cout<<a-b<<endl;
	cout<<1ll*a*b<<endl;
	if (b!=0){
		cout<<fixed<<setprecision(4)<<(double)a/b;
	} else {
		cout<<"INVALID";
	}
}
