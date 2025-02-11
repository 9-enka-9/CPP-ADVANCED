#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,p; cin>>n>>m>>p;
	int a[n+m],b[m];
	for (int i=0;i<n;i++) cin>>a[i];
	for (int i=0;i<m;i++) cin>>b[i];
	
	for (int i=0;i<n+m;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	for (int i=p;i<n+m;i++){
		if (i>=p and i<n) 
			a[i+m]=a[i];
		if (i>=p and i<p+m) {
			a[i]=b[i-p];
		} 
		for (int i=0;i<n+m;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	for (int i=0;i<n+m;i++){
		cout<<a[i]<<" ";
	}
}
