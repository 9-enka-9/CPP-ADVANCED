#include<bits/stdc++.h>

int main() {
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	if (a<=0 or b<=0 or c<=0) {
		printf("NO");
	} else if ((a+b)>c and (b+c)>a and (a+c)>b) {
		printf("YES");		
	} else {
		printf("NO");
	}
		
}


