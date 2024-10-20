#include<bits/stdc++.h>
using namespace std;
int cnt[(int)1e7+1];


int main(){
	int n; cin>>n;
	int a[n];
	for (int i=0;i<=n-1;i++) cin>>a[i];
	for (int x:a){
		cnt[x]=1;
	}
	int t; cin>>t;
	while (t--){
		int x;
		cin>>x;
		if (cnt[x]) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
