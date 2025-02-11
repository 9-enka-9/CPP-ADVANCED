#include<bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin>>n;
	double res=1;
	int lt=1;
	for (int i=1;i<=n-1;i++){
		lt*=i;
		res+=(1.0/lt);
	}
	cout<<fixed<<setprecision(4)<<res;
}
