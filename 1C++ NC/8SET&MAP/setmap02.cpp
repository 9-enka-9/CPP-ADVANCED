#include<bits/stdc++.h>
using namespace std;

int main(){
	set<int> se;
	int n; cin>>n;
	for (int i=1;i<=n;i++){
		int x; cin>>x;
		se.insert(x);
	}
	int q; cin>>q;
	for (int i=1;i<=q;i++){
		int x; cin>>x;
		if (se.count(x)==0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
} 
