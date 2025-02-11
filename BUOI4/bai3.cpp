#include<bits/stdc++.h>
using namespace std;


void sieve(int l, int r, bool prime[]){
	for (int i=2;i<=sqrt(r);i++){
		for (int j=max(i*i, (l+i-1)/i*i); j<=r; j+=i){
			prime[j-l]=false;
		}
	}
}

int main(){
	int d=0;
	cin>>d;
	int start=1, end=9;
	for (int i=1;i<=d;i++){
		start*=10;
		end=end*10 +9;
	}
	bool prime[end-start+1];
	for (int i=0;i<end-start+1;i++){
		prime[i]=false;
	}
	sieve(start, end, prime);
	int c=0;
	for (int i=start; i<=end;i++){
		bool ok=true;
		if (prime[i]){
			int ic=i, fi=ic%10;
			ic/=10;
			int se = ic%10;
			if (fi>se){
				fi=se;
				se=ic%10;
				ic/=10;
				while (fi>se and ic!=0){
					fi=se;
					se=ic%10;
					ic/=10;
				}
				if (ic != 0){
					ok=false;
				}
			} else if (fi<se){
				fi=se;
				se=ic%10;
				ic/=10;
				while (fi<se and ic!=0){
					fi=se;
					se=ic%10;
					ic/=10;
				}
				if (ic != 0){
					ok=false;
				}
			} else {
				ok=false;
			}
		}
		if (ok){
			c++;
		}
	}
	cout<<c;
}
