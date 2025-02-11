#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	for (int i=n;i>=1;i--){
		for (int j=i;j>=1;j--){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for (int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	for (int i=0;i<=n-1;i++){
		for (int j=1;j<=i;j++){
			cout<<" ";
		}
		for (int j=1;j<=n-i;j++){
			cout<<"*";
		} 
		cout<<endl;
	}
	cout<<endl;
	for (int i=1;i<=n;i++){
		if (i==1 or i==n){
			for (int j=1;j<=i;j++){
				cout<<"*";
			}
		} else {
			cout<<"*";
			for (int j=1;j<=i-2;j++){
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<endl;
	}
}
