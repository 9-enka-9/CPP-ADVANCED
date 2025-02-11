#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dic[10]={0};

void count(ll n){
	if (n==0) dic[0]++;
	while (n){
		dic[n%10]++;
		n/=10;
	}
}

int main(){
	int n; cin>>n;
	ll a[n+5];
	for (int i=1;i<=n;i++){
		cin>>a[i];
		count(a[i]);
	}
	for (int i=0;i<=9;i++){
		if (dic[i]) cout<<i<<" "<<dic[i]<<endl;
	}
}
