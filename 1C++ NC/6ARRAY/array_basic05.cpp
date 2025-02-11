#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n]; 
	for (int i=0;i<n;i++) cin>>a[i];
	bool ok=false;
	for (int i=0;i<n;i+=2){
		if (a[i]%2==0) {
			ok=true;
			cout<<a[i]<<" ";
		}
	}
	if (not ok) cout<<"NONE";
}
