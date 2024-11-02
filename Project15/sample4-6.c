#include <stdio.h>

void main() {
	int num;
	printf("負の数を入力するまで無限ループ\n");
	while (1) {
		printf("数値を入力：");
		scanf_s("%d", &num);
		if (num < 0) {
			break;
		}
	}
	printf("終了\n");
}