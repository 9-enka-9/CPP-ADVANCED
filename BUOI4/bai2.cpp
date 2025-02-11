#include<bits/stdc++.h>
using namespace std;

int sumUoc(int n){
	int tonguoc=1;
	for (int i=2;i<sqrt(n); i++){
		if (n%i==0){
			tonguoc+=i;
			if (n/i!=i) tonguoc+=n/i;
		}
	}
	return tonguoc;
}

int main() {
	int a,b;
	cin>>a>>b;
	bool notExist=true;
	for (int i=a;i<=b;i++){
		if (i>1 and sumUoc(i) == i){
			notExist=false;
			cout<<i<<" ";
		}
	}
	if (notExist){
		cout<<0;
	}
}
