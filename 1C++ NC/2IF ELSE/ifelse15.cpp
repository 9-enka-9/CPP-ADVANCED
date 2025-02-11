#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	int a,b;
	cin>>n>>a>>b;
	if (a<(double)b/2){
		cout<<a*n;
	} else if (n%2==0){
		cout<<(n/2)*b;
	} else {
		cout<<(n-1)/2*b+a;	
	}
}
