#include<stdio.h>

int main() {
	int year;
	scanf("%d", &year);
	if (year<=0) {
		printf("INVALID"); 
	}else if(year%400==0){
		printf("YES");
	} else if (year%4==0 and year%100!=0){
		printf("YES");
	} else {
		printf("NO");
	}
}
