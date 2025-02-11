#include<bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=i;j++){
			if (i==1 or i==2 or i==n or j==1 or j==i){
				cout<<"*";
			} else{
				cout<<i;
			}
		}
		cout<<endl;
	}
}
