#include <math.h>
#include <stdio.h>

int main(){
	
	//app calculator
	char operator = '\0';
	double num1 = 0.00;
	double num2 = 0.00;
	double result = 0.00;

	printf("Enter your first number: ");
	scanf("%lf", &num1);

	printf("Enter your operator: ");
	scanf(" %c", &operator); //clean \n from input buffer

	printf("Enter your second number: ");
	scanf("%lf", &num2);

	switch(operator){
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		if(result == 0){
		printf("You can't dived by 0!\n");
		}
		else {
		 result = num1 / num2;
		 
		}
		break;
	default:
		printf("Invalid Operator!\n");
	}
	printf("Result: %.4lf", result);

return 0;
}
