#include<bits/stdc++.h>
using namespace std;
int cnt[10];

void dem(int n){
	if (n<0) n*=-1;
	while (n){
		cnt[n%10]++;
		n/=10;
	}
}
	
int main(){
	int n; cin>>n;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];

	for (int i=0;i<n;i++){
		dem(a[i]);
	}
	for (int i=0;i<10;i++) cout<<i<<" "<<cnt[i]<<endl;
}
