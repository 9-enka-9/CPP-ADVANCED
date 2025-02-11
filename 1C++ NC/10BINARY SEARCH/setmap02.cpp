#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	int q; cin>>q;
	sort(a, a+n);
	for (int i=0;i<q;i++) {
		int x; cin>>x;
		if (binary_search(a, a+n,x)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
