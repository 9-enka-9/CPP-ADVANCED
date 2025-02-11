#include<bits/stdc++.h>
using namespace std;

int main() {
	long long a,b,k,step;
	cin>>a>>b>>k;
	step = k/2;
	k%=2;
	step*=(a-b);
	step+=k*a;
	cout<<step;
}
