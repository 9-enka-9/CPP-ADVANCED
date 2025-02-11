#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int n){
	for (int i=2;i*i<=n;i++){
		if (n%i==0) {
			int c=0;
			while (n%i==0){
				c++;
				n/=i;
			}
			if (c>=2) return true;
		}
	}
	return false;
}

bool check2(int n){
	for (int i=2;i*i<=n;i++){
		if (n%i==0 and n%(i*i)==0) return true;
	}
	return false;	
}

int main(){
	int a,b; cin>>a>>b;
	for (int i=a;i<=b;i++){
		if (check(i)) cout<<i<<" ";
	}
}
