#include<bits/stdc++.h>

int main() {
	char c;
	const int d = 'A'-'b';
	scanf("%c", &c);
	if (c>='A' and c<=('Z'-1)) {
		printf("%c", (char)(c-d));
	} else if (c>='a' and c<'z') {
		printf("%c", (char)(c+1));
	} else if (c=='z' or c=='Z'){
		printf("a");
	} else {
		printf("INVALID");
	}
}
