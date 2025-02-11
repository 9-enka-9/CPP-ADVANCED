#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main (){
	int n;
	cin>>n;
	ll gt=1;
	double s=1;
	for (double i=1;i<=n+1;i++){
		gt*=i;
		s+=(1.0/gt);
	}
	cout<<fixed<<setprecision(2)<<s;
}
