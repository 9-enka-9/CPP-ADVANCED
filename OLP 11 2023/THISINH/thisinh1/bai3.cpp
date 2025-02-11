#include<bits/stdc++.h>
using namespace std;

void sieve(int lim,vector<bool> &isPrime){
	for (int i=2;i<=sqrt(lim);i++){
		if (isPrime[i]){
			for (int j=i*i; j<=lim; j+=i){
				isPrime[j]=false;
			}			
		}
	}
}

bool isdiv5(int n){
	int s=n%10;
	n/=10;
	while (n!=0){
		s+=(n%10);
		n/=10;
	}
	return (s%5)==0;
}

int main(){
	freopen("BAI3.INP", "r", stdin);
	freopen("BAI3.OUT", "w", stdout);
	int lim=3000001;
	vector<bool> isPrime(3000001,true);
	sieve(lim,isPrime);
	int t;
	cin>>t;
	int l[t+1],r[t+1];
	for (int i=0;i<t;i++){
		cin>>l[i]>>r[i];
	}
	for (int i=0;i<t;i++){
		int s=0;
		for (int j=l[i];j<=r[i];j++){
			if (isPrime[j] and isdiv5(j)){
				s++;
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
