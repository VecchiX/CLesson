#include <stdio.h>

void main() {
	int i, num;

	printf("�񐔂���́F");
	scanf_s("%d", &num);

	printf("while�Ŏ��s\n");
	i = 1;
	while (i <= num) {
		printf("*");
		i++;
	}
	printf("\n");

	printf("do�`while�Ŏ��s\n");
	i = 1;
	do {
		printf("*");
		i++;
	} while (i <= num);
	printf("\n");
}