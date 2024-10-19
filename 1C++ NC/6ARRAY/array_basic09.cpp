#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n+5];
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++){
		bool check=true;
		for (int j=1;j<=i-1;j++){
			if (a[i]==a[j]){
				check=false;
				break;
			}
		}
		if (check){
			int c=1;
			for (int j=i+1;j<=n;j++){
				if (a[i]==a[j]) c++;
			}
			cout<<a[i]<<" "<<c<<endl;
		}
	}
}
