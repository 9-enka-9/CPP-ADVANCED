#include<bits/stdc++.h>
using namespace std;

int main () {
	int a,b,c;
	cin>>a>>b>>c;
	cout<<min({a,b,c})<<" "<<(a+b+c)-min({a,b,c})-max({a,b,c})<<" "<<max({a,b,c});
}