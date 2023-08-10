#include <stdio.h>
#include <stdlib.h>

int mainmenu(){
	printf("\n\r");
		printf("   ##############################################\n\r");
		printf("  ################## name here #################\n\r");
		printf(" ##############################################\n\r");
		printf("\n\r");
}
int main(){
	printf("   ##############################################\n\r");
	printf("  ################## name here #################\n\r");
	printf(" ##############################################\n\r");
	printf("\n\r");
	printf("[1] Start Game\n\r");
	printf("[2] Quit\n\r");
	int option;
	scanf("%d", &option);
	
	if (option == 1){
		system("clear");
		mainmenu();
		printf("it works\n\r");
	} else {
		return 0;
	}
}
