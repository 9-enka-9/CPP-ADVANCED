#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n+5];
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++){
		bool check=true;
		for (int j=1;j<i;j++){
			if (a[i]==a[j]){
				check=false;
				break;
			}
		}
		if (check) cout<<a[i]<<" ";
	}
}
