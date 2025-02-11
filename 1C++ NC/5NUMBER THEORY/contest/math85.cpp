#include<bits/stdc++.h>
using namespace std;

int scs(int n){
	if (n==0) return 1;
	int c=0;
	while (n){
		c++;
		n/=10;
	}
	return c;
}

int tong(int n, int somu){
	int s=0;
	while (n){
		int tich=1;
		for (int i=1;i<=somu;i++){
			tich*=(n%10);
		}
		s+=tich;
		n/=10;
	}
	return s;
}

int main(){
	int a,b;
	cin>>a>>b;
	for (int i=a;i<=b;i++){
		int somu=scs(i);
		if (tong(i, somu)==i){
			cout<<i<<" ";
		}	
	}
}
