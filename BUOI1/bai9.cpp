#include<stdio.h>

int main() {
	unsigned long long n;
	unsigned long long s=0;
	scanf("%d", &n);
	for (unsigned long long i=1; i<=n; ++i) {
		s+=(i*i);
	}
	printf("%lld", s);
}
