#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n,s=0;
	cin>>n>>s;
	if (s%n==0){
		cout<<s/n;
	} else {
		cout<<s/n+1
	}
}
