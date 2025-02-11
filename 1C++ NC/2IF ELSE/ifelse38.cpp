#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	char kitu;
	int c1(0), c2(0);
	while (cin>>kitu){
		if (kitu=='C') c1++;
		if (kitu=='+') c2++;
	}
	if (c1>=1 and c2>=2){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
}
