#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long long s=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		s+=i;
	}
	if (s%10==2 or s%10==3 or s%10==5 or s%10==7){
		cout<<"28tech";
	} else {
		cout<<"29tech";
	}
}
