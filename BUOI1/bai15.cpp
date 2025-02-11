#include<stdio.h>

int main() {
	long long n;
	scanf("%lld", &n);
	if (n%3 ==0 and n%5==0){
		printf("1");
	} else {
		printf("0");
	}
}
