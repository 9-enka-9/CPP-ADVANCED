#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	char a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	int m=0;
	map<char,int> mp;
	for (int i=0;i<n;i++){
		mp[a[i]]++;
		if (mp[a[i]]>m) m=mp[a[i]];
	}
	cout<<m<<endl;;
	for (auto it:mp){
		if (it.second==m) cout<<it.first<<" ";
	}
}
