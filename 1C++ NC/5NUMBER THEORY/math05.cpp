#include<bits/stdc++.h>
using namespace std;

bool nto(int n){
	if (n<2) return false;
	for (int i=2;i*i<=n;i++)
		if (n%i==0) return false;
	return true;
}

int main(){
	int t;
	cin>>t;
	for (int i=1;i<=t;i++){
		int n; cin>>n;
		for (int j=2;j<=n/2;j++){
			if (nto(j) and nto(n-j)) {
				cout<<j<<" "<<n-j<<endl;
			}
		}
	}
}
