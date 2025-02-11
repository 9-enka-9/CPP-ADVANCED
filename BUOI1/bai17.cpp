#include<stdio.h>

int main() {
	int t, n;
	scanf("%d%d", &t, &n);
	// 1 3 5 7 8 10 12: 31
	// 4 6 9 11: 30
	if (t==1 or t==3 or t==5 or t==7 or t==8 or t==10 or t==12) {
		printf("31");
	} else if (t==4 or t==6 or t==9 or t==11) {
		printf("30");
	} else if (t==2) {
		if (n%400==0 or (n%4==0 and n%100!=0)){
			printf("29");
		} else {
			printf("28");
		}
	} else {
		printf("INVALID");
	}
}
