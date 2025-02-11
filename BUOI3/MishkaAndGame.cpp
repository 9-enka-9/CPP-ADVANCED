#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int m[n+1], c[n+1];
	int cm=0,cc=0;
	for (int i=1;i<=n;i++){
		cin>>m[i]>>c[i];
		cm+=(m[i]>c[i]);
		cc+=(m[i]<c[i]);
	}
	if (cm>cc){
		cout<<"Mishka";
	} else if (cc>cm){
		cout<<"Chris";
	} else {
		cout<<"Friendship is magic!^^";
	}
}
