#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	bool exist=false;
	for (int i=1;i<=n;i++){
		int x;
		cin>>x;
		if (x==2022) exist=true;
	}
	if (exist) cout<<"YES";
	else cout<<"NO";
}
