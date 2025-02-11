#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long h=0,m=n/60,s=n%60;
	h=m/60;
	m-=h*60;
	cout<<h<<"h : "<<m<<"m : "<<s<<"s";
}
