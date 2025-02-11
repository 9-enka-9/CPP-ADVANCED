#include<stdio.h>

int main() {
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	long long s;
	s = (long long)a*(b+c)+(long long)b*(a+c);
	printf("%lld",s);
}
