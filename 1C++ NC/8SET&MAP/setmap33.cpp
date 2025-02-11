#include<bits/stdc++.h>
using namespace std;


int main(){
	int n; cin>>n;
	map<int,int> mp;
	int ma=0;
	for (int i=0;i<n;i++){
		int x; cin>>x;
		mp[x]++;
		if (mp[x]>ma) ma=mp[x];
	}
	int c=0;
	for (auto it:mp){
		if (it.second==ma) c++;
		if (c>1) {
			cout<<"Biden";
			return 0;
		}
	}
	cout<<"Trump";
}
