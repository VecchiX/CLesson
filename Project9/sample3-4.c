#include <stdio.h>

void main()
{
	int dice;

	printf("1�`6�̐��l����́F");
	scanf_s("%d", &dice);

	if (1 <= dice && dice <= 6) {

		if (dice == 2 || dice == 4 || dice == 6)
		{
			printf("���ł�\n");
		}
		else {
			printf("���ł�\n");
		}
	}
	else {
		printf("�͈͊O�̐��l�ł�\n");
	}
}