#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if (a<=0 or b<=0 or c<=0){
		cout<<"NO";
	} else if (a+b>c and b+c>a and a+c>b){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
}
