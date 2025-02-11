#include<stdio.h>

int main(){
	unsigned int n;
	scanf("%d", &n);
	unsigned long long s=0;
	for (unsigned int i=1; i<=n; i++){
		s+=2*i;
	}
	printf("%lld", s);
}
