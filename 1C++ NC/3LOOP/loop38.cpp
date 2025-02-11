#include<bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		int le, chan;
		if (i%2==0) {
			le=1;
			chan=0;
		} else {
			le=0;
			chan=1;
		}
		for (int j=1;j<=n;j++){
			if (j%2==0) cout<<chan;
			else cout<<le;
		}
		cout<<endl;
	}
}
