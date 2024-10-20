#include<bits/stdc++.h>
using namespace std;


int main(){
	int n; cin>>n;
	set<vector<int>> se;
	for (int i=1;i<=n;i++){
		int m; cin>>m;
		vector<int> v;
		for (int j=1;j<=m;j++){
			int x; cin>>x;
			v.push_back(x);
		}
		se.insert(v);
	}
	cout<<se.size();
}
