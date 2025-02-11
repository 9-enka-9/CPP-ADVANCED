#include<bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		if (i%2!=0){
			char x='A'+i-1;
			for (int j=1;j<=n;j++){
				cout<<x;
				x++;
			}
		} else {
			char x='a'+i-1;
			for (int j=1;j<=n;j++){
				cout<<x;
				x++;
			}
		}
		cout<<endl;
	}
}
