#include<stdio.h>

int main() {
	unsigned long long n;
	scanf("%lld", &n);
	long long s=0;
	
	if (n%2==0){
		s = n/2;
	} else {
		s = (-n-1)/2;
	}

	printf("%lld", s);
}
