#include<bits/stdc++.h>
using namespace std;

int main () {
	double r1,r2;
	int i1, i2;
	cin>>r1>>r2;
	i1=r1; i2=r2;
	if (double(i1)==r1){
		cout<<(i2-i1)+1;		
	} else {
		cout<<i2-i1;
	}
}
