#include<bits/stdc++.h>
using namespace std;

int gt[10]={1,1,2,6,24,120,720,5040,40320,362880};

bool check(int n){
	int s=0;
	int t=n;
	if (n==0) return false;
	while (n!=0){
		s+=gt[n%10];
		n/=10;
	}
	return t==s;
}

int main(){
	int a,b;
	cin>>a>>b;
	for (int i=a;i<=b;i++){
		if (check(i)){
			cout<<i<<" ";
		}
	}
}
