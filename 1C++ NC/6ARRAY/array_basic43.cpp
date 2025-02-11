#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	long long presum[n+1];
	cin>>a[0]; presum[0]=a[0];
	for (int i=1;i<n;i++) {
		cin>>a[i];
		presum[i]=a[i]+presum[i-1];
	}
	
	for (int i=0;i<n;i++){
		for (int j=i;j<n;j++){
			if (i==0) cout<<presum[j]<<" ";
			else cout<<presum[j]-presum[i-1]<<" ";
		}
	}
}
