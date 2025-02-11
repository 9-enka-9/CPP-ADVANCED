#include<stdio.h>

int main() {
	long long n;
	scanf("%d", &n);
	long long s =0;
	for (int i=1; i<=n; ++i) {
		s+=i;
	}
	printf("%lld", s);
}
