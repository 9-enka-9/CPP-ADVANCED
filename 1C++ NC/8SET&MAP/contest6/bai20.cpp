#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<pair<char, int>> v;
	for (int i=1;i<=n;i++){
		pair<char, int> tmp;
		cin>>tmp.first>>tmp.second;
		if (tmp.first=='a' or tmp.first=='e' or tmp.first=='o' or tmp.first=='i' or tmp.first=='u'){
			v.push_back(tmp);
		}
	}
	if (v.size()>0)
		for (auto it=v.rbegin();it!=v.rend();it++){
			cout<<(*it).first<<" "<<(*it).second<<endl;;
		}
	else cout<<"28tech";
}
