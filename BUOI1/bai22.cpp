#include<bits/stdc++.h>

int main() {
	char c;
	scanf("%c", &c);
	const int d = 'A'-'a';
	if (c>='A' and c<='Z') {
		printf("%c", (char)(c-d));
	} else {
		printf("%c", c);
	}
}


