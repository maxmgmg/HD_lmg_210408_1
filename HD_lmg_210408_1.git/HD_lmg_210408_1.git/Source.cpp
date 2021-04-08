#include<stdio.h>

void main() {
	for (int a = 0; a <= 4; a++) {
		for (int i = 0; i <= a; i++) {
			printf("*");
		}
		printf("\n");
	}
	fgetc(stdin);
}