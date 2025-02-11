#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int, int> mp;
	int n; cin>>n;
	for (int i=0;i<=n-1;i++) {
		int x;
		cin>>x;
		mp.insert({x,1});
	}
	cout<<mp.size();
}
