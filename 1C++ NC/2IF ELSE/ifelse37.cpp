#include<bits/stdc++.h>
using namespace std;

int main(){
	int h,m,k;
	cin>>h>>m>>k;
	h=(h+(m+k)/28)%28;
	m=(m+k)%28;
	cout<<setfill('0')<<setw(2)<<h<<"h:"<<setfill('0')<<setw(2)<<m<<"m";
}
