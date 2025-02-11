#include<bits/stdc++.h>
using namespace std;

int main(){
	double n,tax;
	cin>>n;
	if (n>80000000){
		tax = (35.0/100)*n;
	} else if (n>52000000){
		tax = (30.0/100)*n;
	} else if (n>32000000){
		tax = (25.0/100)*n;
	} else if (n>18000000){
		tax = (20.0/100)*n;
	} else if (n>10000000){
		tax = (15.0/100)*n;
	} else if (n>5000000){
		tax = (10.0/100)*n;
	} else {
		tax = (5.0/100)*n;
	}
	cout<<fixed<<setprecision(0)<<"Thu nhap : "<<n-tax<<" VND\n";
	cout<<"Thue : "<<tax<<" VND";
}
