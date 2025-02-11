#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long lt=1,s=0;
	for (int i=1;i<=n;i++){
		lt*=i;
		s+=lt;
	}
	cout<<s;
}
