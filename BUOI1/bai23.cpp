#include<bits/stdc++.h>

int main() {
	char c;
	scanf("%c", &c);
	const int d = 'A'-'a';
	if (c>='a' and c<='z') {
		printf("%c", (char)(c+d));
	} else {
		printf("%c", c);
	}
}


