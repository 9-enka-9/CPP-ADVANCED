#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	n/=28;
	long long s=(1ll*n+1)*n/2;
	s*=28;
	cout<<s;
}
