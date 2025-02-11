#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main (){
	const int MOD=1e9+7;
	int n;
	cin>>n;
	ll gt=1;
	for (int i=1;i<=n;i++){
		gt*=i;
		gt%=MOD;
		cout<<gt<<endl;
	}
}
