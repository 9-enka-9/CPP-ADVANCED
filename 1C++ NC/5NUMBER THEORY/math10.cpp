#include<bits/stdc++.h>
using namespace std;

int main(){
	const int mod=1e9+7;
	int t;
	cin>>t;
	long long res=1;
	for (int i=1;i<=t;i++){
		int x,y; cin>>x>>y;
		int c=0;
		while (y--){
			c++;
		}
		res*=(c+1)%mod;
		res%=mod;
	}
	cout<<res;
}
