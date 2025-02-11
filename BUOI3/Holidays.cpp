#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int minres, maxres, t, d;
	t = n/7;
	d = n%7;
	minres = maxres = t*2;
	if (d<2){
		maxres+=d;
	} else if (d>5){
		maxres+=2;
		minres+=1;
	} else {
		maxres+=2;
	}
	cout<<minres<<" "<<maxres;
}
