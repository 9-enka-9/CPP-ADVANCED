#include<bits/stdc++.h>
using namespace std;

int pt(int n, int k){
	int c=0;
	for (int i=2;i*i<=n;i++){
		if (n%i==0){
			while (n%i==0){
				c++;
				n/=i;
				if (c==k) return i;
			}
		}
	}
	if (n!=1 and ++c==k) return n;
	return -1;
}

int main(){
	int n,k; cin>>n>>k;
	cout<<pt(n,k);
}