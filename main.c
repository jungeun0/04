#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	char c;
	
	printf("���ڸ� �Է��ϼ���  : ");
	scanf("%c", &c);
	
	if ('A'<=c&& c<='Z'){
		printf(" �빮���Դϴ�.\n ") ;
	}
	else if ('a'<=c && c<='z'){
		printf("�ҹ����Դϴ�.\n");
	}
	else if ('0'<=c&& c<='9'){	
		printf("�����Դϴ�.\n");
	}
	else {
		printf("��Ÿ �����Դϴ�. \n");
	}
	return 0;
}
