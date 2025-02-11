#include<stdio.h>

int main() {
	long long a,b;
	scanf("%lld%lld", &a, &b);
	printf("%lld %lld %lld %.2lf", a+b, a-b, a*b, (double)a/b);
}
