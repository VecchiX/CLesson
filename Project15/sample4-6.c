#include <stdio.h>

void main() {
	int num;
	printf("���̐�����͂���܂Ŗ������[�v\n");
	while (1) {
		printf("���l����́F");
		scanf_s("%d", &num);
		if (num < 0) {
			break;
		}
	}
	printf("�I��\n");
}