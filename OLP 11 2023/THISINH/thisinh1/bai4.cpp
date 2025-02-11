#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("BAI4.INP", "r", stdin);
	freopen("BAI4.OUT", "w", stdout);
	string s;
	cin>>s;
	int len=s.length(), reslen=len-1;
	for (int i=0; i<len; i++){
		int c=1;
		for (int start=1;start<=reslen; start++){
			bool ok=true;
			for (int j=0; j<=i; j++){
//				cout<<j+start<<" "<<s[j+start]<<" and "<<j<<" "<<s[j]<<endl;
				if (s[start+j] != s[j]){
					ok=false;
					break;
				}
			}
			c+=ok;
		}
		cout<<c<<" ";
		reslen--;
		if (c==1){
			break;
		}
	}
	for (int i=0;i<=reslen;i++){
		cout<<1<<" ";
	}
}
