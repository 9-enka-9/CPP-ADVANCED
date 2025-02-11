#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	int c=0;
	if (n==0){
		cout<<1;
		return 0;
	}
	while (n!=0){
		c++;
		n/=10;
	}
	cout<<c;
}
