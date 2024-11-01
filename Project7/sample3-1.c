#include <stdio.h>

void main()
{
	int a;

	printf("数値を入力：");

	scanf_s("%d", &a);

	if (a > 0) {
		printf("入力した値は正の数\n");
	}
	else {
		printf("入力した値は負の数\n");
	}
}