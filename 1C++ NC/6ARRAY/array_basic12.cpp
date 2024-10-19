#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n+5];
	for (int i=0;i<=n-1;i++) cin>>a[i];
	int curMax=0, curMin=1e6+1, iMax=0, iMin=0;
	for (int i=0;i<=n-1;i++){
		if (curMax<a[i]){
			curMax=a[i];
			iMax=i;
		}
		if (curMin>=a[i]){
			curMin=a[i];
			iMin=i;
		}
	}
	cout<<iMin<<" "<<iMax;
}
