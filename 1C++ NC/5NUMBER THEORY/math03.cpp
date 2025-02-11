#include<bits/stdc++.h>
using namespace std;

int nto(int n){
	if (n<2) return false;
	for (int i=2;i*i<=n;i++){
		if (n%i==0) return false;
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	for (int i=1;i<=t;i++){
		int n;
		cin>>n;
		if (nto(n)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
