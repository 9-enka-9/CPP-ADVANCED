#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int cc=0,cl=0;
	while (cin>>n){
		if (n%2==0) cc++;
		else cl++;
	}
	if (cc>cl) cout<<"CHAN";
	else if (cc<cl) cout<<"LE";
	else cout<<"CHANLE";
}
