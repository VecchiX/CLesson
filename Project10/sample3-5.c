#include <stdio.h>

void main() {
	int num;
	printf("input number 1Å`3ÅF");

	scanf_s("%d", &num);

	switch (num) {
	case 1:
		printf("one\n");
		break;
	case 2:
		printf("two\n");
		break;
	case 3:
		printf("three\n");
		break;
	default:
		printf("NG value\n");
		break;
	}
}