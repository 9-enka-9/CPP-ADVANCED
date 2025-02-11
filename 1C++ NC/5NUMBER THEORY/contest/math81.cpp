#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool nto(int n){
	if (n<2) return false;
	for (int i=2;i*i<=n;i++){
		if (n%i==0) return false;
	}
	return true;
}

bool tang(int n){
	int tmp=n%10;
	n/=10;
	while (n!=0){
		if (tmp<n%10) return false;
		tmp=n%10;
		n/=10;
	}
	return true;
}


int main(){
	int a,b;
	cin>>a>>b;
	for (int i=a;i<=b;i++){
		if (tang(i) and nto(i)){
			cout<<i<<" ";
		}
	}
}

