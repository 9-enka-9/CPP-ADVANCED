#include<stdio.h>

int main() {
	unsigned int a,b;
	scanf("%d%d", &a,&b);
	unsigned int s;
	if (a%b==0){
		s = a;
	} else {
		s = a/b;
		s = s*b + b;
	}
	
	printf("%d", s);
}
