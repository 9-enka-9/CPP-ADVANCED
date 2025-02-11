#include<bits/stdc++.h>
using namespace std;

int main(){
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	if (d/c == c/b and c/b == b/a){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
}
