#include<stdio.h>

int main(){
	int r;
	const double pi = 3.14;
	scanf("%d", &r);
	printf("%.2lf %.2lf", 2*pi*r, pi*r*r);
}
