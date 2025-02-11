#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x; cin>>n>>x;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	
	int *res=lower_bound(a,a+n,x);
	if(*res==x) cout<<res-a;
	else cout<<-1;
}
