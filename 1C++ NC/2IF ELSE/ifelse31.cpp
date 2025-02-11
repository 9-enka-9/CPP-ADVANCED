#include<bits/stdc++.h>
using namespace std;

int main(){
	int a1,a2,a3,b1,b2,b3,n;
	cin>>a1>>a2>>a3;
	cin>>b1>>b2>>b3;
	cin>>n;
	int a=a1+a2+a3, b=b1+b2+b3, res=0;
	if (a%5==0){
		res+=a/5;
	} else {
		res+=a/5 +1;
	}
	if (b%10==0){
		res+=b/10;
	} else {
		res+=b/10+1;
	}
	if (res<=n){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
}
