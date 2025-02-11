#include<bits/stdc++.h>
using namespace std;

//void sieve(int n, bool *prime[]){
//	for (int i =2; i*i<=n;i++){
//		if (prime[i]){
//			for (int j=i*i;j<=n;j+=i){
//				prime[j]=false;
//			}
//		}
//	}
//}

int main(){
	int n;
	cin>>n;
//	bool prime[n+1]
//	fill(prime, prime +n+1, true);
//	int rep=n;
	int res=0,two=0,three=0;
	if (n%2==0){
		res=n/2;
		two=n/2;
	} else {
		res=n/2;
		two= n/2-1;
		three=1;
	}
	cout<<res<<endl;
	for (int i =0;i<two;i++){
		cout<<2<<" ";
	}
	for (int i =0;i<three;i++){
		cout<<3<<" ";
	}
}
