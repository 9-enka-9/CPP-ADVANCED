#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n; cin>>n;
	int a[n+5],t;
	ll s[n+1];
	s[0]=0;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=s[i-1]+a[i];
	}
	cin>>t;
	while (t--){
		int l,r; cin>>l>>r;
		cout<<s[r]-s[l-1]<<endl;
	}
}
