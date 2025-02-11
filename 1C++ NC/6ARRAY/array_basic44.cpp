#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	
	long long c=0;
	for (int i=0;i<n;i++){
		int c1=0, c2=0; 
//		for (int j=2;j<=n;j+=2){
		for (int k=i;k<n;k++){
			if (a[k]%2==0) c2++;
			else c1++;
			if (c1==c2) c++; 
		}
//		}
	}
	
	cout<<c;
}
