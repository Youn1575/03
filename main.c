#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[]) {
	int a, b;
	float x, y;

	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &a);
	x = a;

	printf("�и� �Է��ϼ���: ");
	scanf("%d", &b);
	y = b;

	(float)printf("�������� ����� %7.6f �Դϴ�: ", x/y);

	return 0;
}

