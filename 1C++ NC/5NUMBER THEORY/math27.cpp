#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n){
	int t=0,tmp=n;
	while (n){
		t=t*10+n%10;
		n/=10;
	}
	return t==tmp;
}

bool primefactor(int n){
	int c=0;
	for (int i=2;i*i<=n;i++){
		if (n%i==0){
			c++;
			while (n%i==0){
				n/=i;
			}
		}
	}
	if (n!=1) c++;
	return c>=3;
}

int main(){
	int a,b; cin>>a>>b;
	int c=0;
	for (int i=a;i<=b;i++){
		if (palindrome(i) and primefactor(i)){
			c++;
			cout<<i<<" ";
		}
	}
	if (c==0) cout<<-1;
}
