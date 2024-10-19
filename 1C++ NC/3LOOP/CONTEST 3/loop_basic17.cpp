#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n; cin>>n;
	ll re=0;
	int c2=0,c3=0,c5=0,c7=0;
	while (n){
		int t=n%10;
		if (t==2) c2++;
		if (t==3) c3++;
		if (t==5) c5++;
		if (t==7) c7++;
		re=re*10+n%10;
		n/=10;
	}
	while(re){
		int t=re%10;
		if (t==2 and c2!=0){
			cout<<2<<" "<<c2<<endl;
			c2=0;
		}
		if (t==3 and c3!=0){
			cout<<3<<" "<<c3<<endl;
			c3=0;
		}
		if (t==5 and c5!=0){
			cout<<5<<" "<<c5<<endl;
			c5=0;
		}
		if (t==7 and c7!=0){
			cout<<7<<" "<<c7<<endl;
			c7=0;
		}
		re/=10;
	}
}
