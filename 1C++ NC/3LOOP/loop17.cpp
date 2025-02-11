#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,s=0;
	cin>>n;
	while (n!=0){
		s+=(n%10);
		n/=10;
	}
	cout<<s;
}
