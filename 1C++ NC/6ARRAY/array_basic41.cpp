#include<bits/stdc++.h>
using namespace std;

void erase(int a[],int &n, int &k){
	for (int i=k;i<n;i++) a[i]=a[i+1];
	n--;
	k--;
} 

int main(){
	int n; cin>>n;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	
	for (int i=0;i<n;i++){
		if (a[i]==28) erase(a,n,i);
	}
	
	for (int i=0;i<n;i++) cout<<a[i]<<" ";
}
