#include<bits/stdc++.h>
using namespace std;

bool nto(int n){
	if (n<2) return false;
	for (int i=2;i*i<=n;i++){
		if (n%i==0) return false;
	}
	return true;
}

int sumuoc(int n){
	int s=0;
	for (int i=2;i*i<=n;i++){
		if (n%i==0){
			s+=i;
			while (n%i==0){
				n/=i;
			}
		}
	}
	if (n!=1) s+=n;
	return s;
}


int main (){
	int a,b;
	cin>>a>>b;
	int c=0;
	for (int i=a;i<=b;i++){
		if (not nto(sumuoc(i))){
			cout<<i<<" ";
			c++;
		}
	}
	if (not c) cout<<"28tech";
}
