#include <stdio.h>

int main (){
	int num;

	scanf("%d", &num);

	if(num%2 == 0){
		printf("Número par!\n");
	}
	else{
		printf("Número ímpar!\n");
	}

	return 0;
}
