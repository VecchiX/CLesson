#include <stdio.h>

void main() {
	int i, num;

	printf("‰ñ”‚ğ“ü—ÍF");
	scanf_s("%d", &num);

	printf("while‚ÅÀs\n");
	i = 1;
	while (i <= num) {
		printf("*");
		i++;
	}
	printf("\n");

	printf("do`while‚ÅÀs\n");
	i = 1;
	do {
		printf("*");
		i++;
	} while (i <= num);
	printf("\n");
}