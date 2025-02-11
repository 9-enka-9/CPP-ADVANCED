#include<bits/stdc++.h>
using namespace std;


bool nto(int n){
	if (n<2) return false;
	for (int i=2;i*i<=n;i++){
		if (n%i==0) return false;
	}
	return true;
}

bool tn(int n){
	int lat=0,t=n;
	while (n){
		lat= lat*10 + n%10;
		n/=10;
	}
	return lat==t;
}

int tong(int n){
	int s=0;
	while (n){
		s+=n%10;
		n/=10;
	}
	return s;
}

int main (){
	int a,b;
	cin>>a>>b;
	for (int i=a;i<=b;i++){
		if (tn(tong(i)) and nto(i)){
			cout<<i<<" ";
		}
	}
}
