#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	ll n; cin>>n;
	ll tmp=0;
	int c2=0,c3=0,c5=0,c7=0;
	while (n){
		if (n%10==2) c2++;
		if (n%10==3) c3++;
		if (n%10==5) c5++;
		if (n%10==7) c7++;
		tmp=tmp*10+n%10;
		n/=10;
	}
	if (c2!=0) cout<<"2 "<<c2<<endl;
	if (c3!=0) cout<<"3 "<<c3<<endl;
	if (c5!=0) cout<<"5 "<<c5<<endl;
	if (c7!=0) cout<<"7 "<<c7<<endl;
	cout<<endl;
	while(tmp){
		if (tmp%10==2 and c2!=0){
			cout<<"2 "<<c2<<endl;
			c2=0;
		}
		if (tmp%10==3 and c3!=0){
			cout<<"3 "<<c3<<endl;
			c3=0;
		}
		if (tmp%10==5 and c5!=0){
			cout<<"5 "<<c5<<endl;
			c5=0;
		}
		if (tmp%10==7 and c7!=0){
			cout<<"7 "<<c7<<endl;
			c7=0;
		}
		tmp/=10;
	}

}
