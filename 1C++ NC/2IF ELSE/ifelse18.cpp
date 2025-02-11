#include<bits/stdc++.h>
using namespace std;

int main(){
	char c;
	cin>>c;
	if ('a'<=c and c<='z'){
		cout<<(char)(c+('A'-'a'));
	} else if ('A'<=c and c<='Z'){
		cout<<(char)(c+('a'-'A'));
	} else {
		cout<<c;
	}
}
