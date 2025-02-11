#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	int c=0;
	while (n>0){
		int t=n%10;
		if (t==2 or t==3 or t==5 or t==7){
			c++;
		}
		n/=10;
	}
	cout<<c;
}
