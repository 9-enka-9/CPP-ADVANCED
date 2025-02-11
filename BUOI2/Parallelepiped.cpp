//ACCEPTED
#include<bits/stdc++.h>
using namespace std;

int main() {
	double s1,s2,s3;
	cin>>s1>>s2>>s3;
	// s1 = a*b
	// s2 = a*c
	// s3 = b*c
	double a,b,c;
	c = (s2*s3)/s1;
	c = sqrt(c);
	a = s2/c;
	b = s3/c;
	
	cout<<(int)(a+b+c)*4;
}
