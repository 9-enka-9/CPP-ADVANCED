#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	if ((a+b+c+n)%3==0){
		int k=(a+b+c+n)/3;
		if (k>=a and k>=b and k>=c){
			cout<<"YES";
		} else {
			cout<<"NO";
		}
	} else {
		cout<<"NO";
	}
	
}
