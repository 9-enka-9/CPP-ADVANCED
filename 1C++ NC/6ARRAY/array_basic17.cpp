#include<bits/stdc++.h>
using namespace std;

bool dx(int a[],int n){
	for (int i=1;i<=n/2;i++){
		if (a[i]!=a[n-i+1]) return false; 
	}
	return true;
}

bool dx2(int a[], int n){
	int l=1,r=n;
	while (l<=r){
		if (a[l]!=a[r]) return false;
		l++;
		r--;
	}
	return true;
}

int main(){
	int n; cin>>n;
	int a[n+5];
	for (int i=1;i<=n;i++) cin>>a[i];
	if(dx2(a,n)) cout<<"YES";
	else cout<<"NO";
}
