#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if (n<2) return false;
	for (int i=2;i*i<=n;i++)
		if (n%i==0) return false;
	return true;
}

bool check(int n){
	int sum=0;
	while (n){
		sum+=n%10;
		n/=10;
	}
	long long a=1,b=1;
	if (sum==1) return true;
	for (int i=1;i<=93;i++){
		long long t=b; b=a+b; a=t;
		if (b>=sum) return b==sum;
	}
}

int main(){
	int n;	cin>>n;
	for (int i=2;i<=n;i++){
		if (check(i)&&isPrime(i)){
			cout<<i<<" ";
		}
	}
}

