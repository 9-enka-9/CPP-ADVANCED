#include<bits/stdc++.h>
using namespace std;
int cnt[(int)1e6+1]; // default all values equal 0

int main(){
	int n; cin>>n;
	int a[n], cMax=-1;
	for (int i=0;i<=n-1;i++) cin>>a[i];
	for (int x:a){
		cnt[x]=1;
		cMax=max(cMax,x);
	}
	int c=0;
	for (int i=0;i<=cMax;i++) c+=cnt[i];
	cout<<c;
}
