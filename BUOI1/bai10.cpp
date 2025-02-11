#include<stdio.h>

int main() {
	long long n;
	scanf("%lld", &n);
	double s=0;
	for (long long i=1; i<n; ++i){
		s+= ((double)1/(i*(i+1)));
	}
	printf("%.2lf", s);
}
