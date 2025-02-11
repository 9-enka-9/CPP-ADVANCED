#include<bits/stdc++.h>
using namespace std;

int bs(int a[], int n, int x){
	int l=0,r=n-1;
	int res=-1;
	while (l<=r){
		int m=(l+r)/2;
		if (a[m]<x){
			res=m;
			l=m+1;
		} else r=m-1;
	}
	return res;
}

int main(){
	int n,m; cin>>n>>m;
	int a[n], b[m];
	for (int i=0;i<n;i++) cin>>a[i];
	for (int i=0;i<m;i++) cin>>b[i];
	sort(b,b+m);

	for (int i=0;i<n;i++){
		cout<<bs(b,m,a[i])+1<<" ";
	}
}
