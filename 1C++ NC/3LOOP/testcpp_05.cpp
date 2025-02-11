#include<bits/stdc++.h>
using namespace std;

void in(char x, int n){
	cout<<"*";
	for (int i=1;i<=n-2;i++){
		cout<<x;
	}
	cout<<"*";
}

int main () {
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		if (i==n or i==1){
			in('*', n);
		} else if (i%2==0){
			in('~', n);
		} else {
			in('#', n);
		}
		cout<<endl;
	}
}
