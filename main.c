#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[]) {
	int a, b;
	float x, y;

	printf("분자를 입력하세요: ");
	scanf("%d", &a);
	x = a;

	printf("분모를 입력하세요: ");
	scanf("%d", &b);
	y = b;

	(float)printf("나누기의 결과는 %7.6f 입니다: ", x/y);

	return 0;
}

