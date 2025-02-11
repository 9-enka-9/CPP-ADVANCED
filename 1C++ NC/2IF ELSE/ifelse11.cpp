#include<bits/stdc++.h>
using namespace std;

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	if(a>0 and b>0 and c>0 and a+b>c and a+c>b and b+c>a){
		if (a==b && b==c){
			cout<<1;
		} else if (a==b or b==c or a==c){
			cout<<2;
		} else if (a*a+b*b==c*c or a*a+c*c==b*b or b*b+c*c==a*a){
			cout<<3;
		} else {
			cout<<4;
		}
	} else {
		cout<<"INVALID";
	}
}
