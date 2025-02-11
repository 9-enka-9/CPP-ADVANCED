#include<bits/stdc++.h>
using namespace std;
int s[1005];


int main(){
	int n,k; cin>>n>>k;
	int a[n],s[n-1];
	for (int i=0;i<n;i++){
		cin>>a[i];
		s[i+1]=s[i]+a[i];
	} 
	
	for (int i=0;i<=n-k;i++) {
		cout<<s[i+k]-s[i]<<" ";
	}
}
