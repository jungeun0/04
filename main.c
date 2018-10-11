#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	char c;
	
	printf("문자를 입력하세요  : ");
	scanf("%c", &c);
	
	if ('A'<=c&& c<='Z'){
		printf(" 대문자입니다.\n ") ;
	}
	else if ('a'<=c && c<='z'){
		printf("소문자입니다.\n");
	}
	else if ('0'<=c&& c<='9'){	
		printf("숫자입니다.\n");
	}
	else {
		printf("기타 문자입니다. \n");
	}
	return 0;
}
