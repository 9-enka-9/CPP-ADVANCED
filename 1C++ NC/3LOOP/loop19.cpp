#include<bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin>>n;
	int bia=n/28,vo=bia;
	while (vo>=3){
		bia+=(vo/3);
		vo=vo-(vo/3)*3+(vo/3);
	} 
	cout<<bia;
}
