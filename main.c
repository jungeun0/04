#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	int a; //���� �����ϴ� ���� 
	
	printf("���� �ϳ��� �Է��ϼ���\n");
	scanf("%d", &i);
	
	if (i>=0){
		a = i;
		}	 
	else {
	
		a = -i;
	}
	
	printf("������ %d�Դϴ�.", a);

	return 0;
}
