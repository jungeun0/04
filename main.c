#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num = 12;
	int i;
	
	
	do{
		
		printf("Guess the number! \n");
		scanf("%d", &i);
		
		
		if (i>num){
			printf("low!\n");
		}
		else if(i<num){
			printf("high!\n");
		}
	}while(i != num);
	
	printf("congratuation!\n");
	

	return 0;
}
