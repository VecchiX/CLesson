#include <stdio.h>

void main() {
	int num;
	printf("1�`3����͂��Ȃ����F");

	scanf_s("%d", &num);

	if (num == 1) {
		printf("one\n");
	}
	else if (num == 2) {
		printf("two\n");
	}
	else if (num == 3) {
		printf("three\n");
	}
	else {
		printf("�s�K�؂Ȓl�ł�\n");
	}
}