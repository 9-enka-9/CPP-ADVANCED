#include<bits/stdc++.h>
using namespace std;

int main () {
	int h,m;
	cin>>h>>m;
	int rest = 60*(24-h);
	if (m>0){
		rest-=m;
	}
	cout<<rest;
	
}
