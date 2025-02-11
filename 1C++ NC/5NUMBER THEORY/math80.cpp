#include<bits/stdc++.h>
using namespace std;
#define ll long long

map<int, int> mp;
void fibo(){
	ll a=1,b=1;
	mp[1]=1;
	for (int i=3; i<=93;i++){
		ll t=b; b=a+b; a=t;
		mp[t]=1;
	}
}

int main(){
	int t; cin>>t;
	fibo();
	while (t--){
		int n; cin>>n;
		if (mp[n]) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
