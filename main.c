#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num = 0;
	char c;
	
	printf("문자를 입력하세요  : ");
	
	while ( (c = getchar() ) != '\n')
	{	if('0'<=c && c<='9')
		{
		 num+=1;
		
		}
	
	}
	printf("The number of digits is %d", num);
	return 0;
}
