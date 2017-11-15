#include "calcfunc.h"

int main(void) {
	
	int option = 0;
	float n1, n2, res;
	
	printf("Simple Calculator.\n");
	printf("------------------\n");
	printf("Please type 1/2/3/4 for Addition/Subtraction/Multiplication/Division: ");
	
	while(option!=1 && option!=2 && option!=3 && option!=4){
		scanf("%d", &option);
		
		// empty input buffer
		int ch;
		while((ch = getchar()) != EOF && ch != '\n');
		
		if(option!=1 && option!=2 && option!=3 && option!=4){
			printf("Please type 1/2/3/4: ");
		}
	}
	
	printf("\nPlease type in two numbers: ");
	scanf("%f %f", &n1, &n2);
	
	if(option == 1){
		res = Addition(n1, n2);
	}else if(option == 2){
		res = Subtraction(n1, n2);
	}else if(option == 3){
		res = Multiplication(n1, n2);
	}else if(option == 4){
		res = Division(n1, n2);
	}
	
	printf("\nResult is %.2f", res);
	
	/*
	printf("2.2+2.4 ger: %.2f\n", Addition(2.2, 2.4));
	printf("4.2-1.7 ger: %.2f\n", Subtraction(4.2, 1.7));
	printf("1.8*5.0 ger: %.2f\n", Multiplication(1.8, 5.0));
	printf("5.0/2.0 ger: %.2f\n", Division(5.0, 2.0));
	*/
	return 0;
}