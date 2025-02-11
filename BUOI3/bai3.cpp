#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int s; 
	n/=3;
	n*=3;
	s = (n-3)/3 +1;
	s = ((n+3)*s)/2;
	cout<<s;
}
