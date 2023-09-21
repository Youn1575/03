#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int i;
	
	printf("input a number :");
	scanf("%c", &c);
	
	i = c - '0'; //실제 아스키코드를 빼서 구 함 
	printf("The input number is %i \n", c);		
	printf("The input number is %i \n", i);	
	
	return 0;
}


