#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	set<char> se;
	for (int i=0;i<n;i++){
		char x; cin>>x;
		if ('a'<=x and x<='z') {
			se.insert(x);
		} else if ('A'<=x and x<='Z'){
			se.insert((char)('a'+x-'A'));
		}
	}
	cout<<se.size()<<endl;
	for (auto it:se) cout<<it<<" ";
}
