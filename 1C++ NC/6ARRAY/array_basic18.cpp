#include<bits/stdc++.h>
using namespace std;

bool check(int a, int b, int c){
	return 1ll*a*b<0 or 1ll*b*c<0;
}

int main(){
	int n; cin>>n;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	for (int i=0;i<n;i++){
		if (check(a[i-1],a[i],a[i+1])) cout<<a[i]<<" ";
	}
}
