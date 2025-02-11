#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	if (n>=1000) cout<<1200000+4500*n;
	else if (n>=800) cout<<900000+3900*n;
	else if (n>=500) cout<<800000+3700*n;
	else cout<<3300*n;
}
