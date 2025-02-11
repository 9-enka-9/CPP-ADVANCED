#include<bits/stdc++.h>
using namespace std;

int main(){
	char c;
	cin>>c;
	if (c=='a' or c=='e' or c=='i' or c=='o' or c=='u'){
		cout<<(char)(c+('A'-'a'));
	} else if (c=='A' or c=='E' or c=='I' or c=='O' or c=='U'){
		cout<<c;
	} else {
		cout<<(int)c;
	}
}
