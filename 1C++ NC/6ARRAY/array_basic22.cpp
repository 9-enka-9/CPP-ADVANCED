#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x; cin>>n>>x;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	bool found=false;
	for (int i=0;i<n-1;i++){
		if (found) a[i]=a[i+1];
		else if (a[i]==x) {
			found=true;
			a[i]=a[i+1];
		}
	}
	if (found or x==a[n-1])
		for (int i=0;i<n-1;i++) cout<<a[i]<<" ";
	else cout<<"NOT FOUND";
}
