#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n+5]; 
	for (int i=1;i<=n;i++) cin>>a[i];
	int curMin=1e3+5,c=0;
	for (int i=1;i<=n;i++){
		if (a[i]<curMin){
			curMin=a[i];
			c=1;
		} else if (curMin==a[i]){
			c++;
		}
	}
	cout<<c;
}
