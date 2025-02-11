#include<bits/stdc++.h>
using namespace std;

int main() {
	long long x,y;
	unsigned long long s;
	long long step,c;
	cin>>x>>y>>s;
	c=abs(x)+abs(y);
	step=s-c;
	if (step%2==0 && step/2>=0){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
}
