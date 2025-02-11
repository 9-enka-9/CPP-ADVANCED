#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int> v(n);
	for (int i=0;i<n;i++) cin>>v[i];
	sort(v.begin(),v.end());
	for (int x:v) cout<<x<<" ";
	cout<<endl;
	vector<int>::reverse_iterator it=v.rbegin();
	for (it; it!=v.rend();it++) cout<<*it<<" ";
}
