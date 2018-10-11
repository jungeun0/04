#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	int a; //절댓값 저장하는 변수 
	
	printf("정수 하나를 입력하세요\n");
	scanf("%d", &i);
	
	if (i>=0){
		a = i;
		}	 
	else {
	
		a = -i;
	}
	
	printf("절댓값은 %d입니다.", a);

	return 0;
}
