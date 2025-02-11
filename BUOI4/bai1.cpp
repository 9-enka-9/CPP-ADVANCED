#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if (n<=1) return false;
	for (int i =2;i<=sqrt(n); i++){
		if (n%i==0){
			return false;
		}
	}
	return true;
}

int main() {
	int a,b;
	cin>>a>>b;
	int count=0;
	for (int i=a; i<b; i++){
		if (isPrime(i)){
			int s=0,ic=i,j=ic%10;
			bool con=true;
			while (ic!=0){
				if (isPrime(j)){
					s+=j;
					ic/=10;
					j=ic%10;
				} else {
					con=false;
					break;
				}
			}
			if (con && isPrime(s)) {
				count++;
				cout<<i<<" ";
			}
		}
	}
	cout<<endl<<count;
}
