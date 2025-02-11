#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long t=n/10;
	if ((n%10%2==0 and t%10%2==0) or (n%10%2!=0 and t%10%2!=0)){
		cout<<"28tech";
	} else {
		cout<<"29tech";
	}
}
