#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	set<int> se;
	for (int i=0;i<n;i++){
		if (se.count(a[i])==0) cout<<a[i]<<" ";
		se.insert(a[i]);
	}
}
