#include<bits/stdc++.h>
using namespace std;

int lowerbound(int a[], int n, int x){
	int l=0,r=n-1;
	int res=-1;
	while (l<=r){
		int m=(l+r)/2;
		if (a[m]==x){
			res=m;
			r=m-1;
		} else if (x>a[m]){
			l=m+1;
		} else if (x<a[m]){
			r=m-1;
		}
	}
	return res;
}

int main(){
	int n,x; cin>>n>>x;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	cout<<lowerbound(a,n,x);
}
