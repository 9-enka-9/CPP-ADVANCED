#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("BAI4.INP", "r", stdin);
//	freopen("BAI4.OUT", "w", stdout);
	map<char, int> t;
	string s;
	cin>>s;
	for (int i=0; i<s.length(); i++){
		if (t.find(s[i]) == t.end()){
			t[s[i]]=1;
		} else {
			t[s[i]]++;
		}
	}
	
	for (int i=s.length()-1; i>=0; i--){
		cout<<t[s[i]]<<" ";
		t[s[i]]--;
	}
}
