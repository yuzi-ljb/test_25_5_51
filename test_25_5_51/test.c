#include<stdio.h>

int main() {
	int i = 0;
	for (i = 1; i <= 4; i++) {
		int m = 0;
		for (m = 1; m <= 4 - i; m++)
			printf(" ");
		int n = 0;
		for (n = 1; n <= 1 + (i - 1) * 2; n++)
			printf("*");


		printf("\n");
	}
	
	for (i = 1; i <= 4; i++) {
		int m = 0;
		for (m = 0; m <=i-1; m++)
			printf(" ");
		int n = 0;
		for (n = 1; n <=5-(i-1)*2; n++)
			printf("*");


		printf("\n");
	}
	
	return 0;
}