#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	int c2=0, c3=0, c5=0, c7=0;
	cin>>n;
	while (n>0){
		if (n%10==2) c2++;
		if (n%10==3) c3++;
		if (n%10==5) c5++;
		if (n%10==7) c7++;
		n/=10;
	}
	if (c2!=0) cout<<"2 "<<c2<<endl;
	if (c3!=0) cout<<"3 "<<c3<<endl;
	if (c5!=0) cout<<"5 "<<c5<<endl;
	if (c7!=0) cout<<"7 "<<c7;
	
}
