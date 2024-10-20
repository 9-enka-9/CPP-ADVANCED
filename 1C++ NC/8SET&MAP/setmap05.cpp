#include<bits/stdc++.h>
using namespace std;

int main(){
	map<char, int> mp;
	int n; cin>>n;
	for (int i=0;i<=n-1;i++){
		char x; cin>>x;
		mp[x]++;
	}
	cout<<mp.begin()->first<<" "<<mp.begin()->second<<endl<<endl;
	cout<<mp.rbegin()->first<<" "<<mp.rbegin()->second<<endl<<endl;
	for (auto it:mp){
		cout<<it.first<<" "<<it.second<<endl;
	}
	cout<<endl;
	for (auto )
}
