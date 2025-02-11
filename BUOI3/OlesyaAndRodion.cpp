#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,t;
	cin>>n>>t;
	if (n==1 && t==10){
		cout<<-1;
	} else {
		cout<<t;
		int i =1;
		if (t==10) i++;
		for (i; i<n; i++){
			cout<<0;
		}
	}
}
