#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withMoney(float balance);

int main(){

	//banking PORGRAMa
	int choice = 0;
	float balance = 0.0f;
	
	printf("\n***Welcome to the BankCorrupt Corp.***\n");

	do {

	printf("\n1. Check Balance.\n");
	printf("2. Deposit money.\n");
	printf("3. Withdraw Money.\n");
	printf("4. Exit.\n");
	printf("\nEnter Your choice: ");
	scanf("%d", &choice);
	
	switch (choice) {
		case 1:
			checkBalance(balance);
			break;
		case 2:
			balance += deposit();
			break;
		case 3:
			balance -= withMoney(balance);
			break;
		case 4:
			printf("\nThanks for choosing us!\n");
			break;
		default:
			printf("\nPlease choose between 1 - 4\n");
			break;
		}
	}while (choice != 4);
	return 0;
}


void checkBalance(float balance){
	printf("\nYour current balance is: $%.2f\n", balance);
}
 
float deposit(){
	
	float amount = 0.0f;
	printf("\nEnter amount to deposit: $");
	scanf("%f", &amount);

	if (amount < 0){
		printf("\nThe amount at deposited is incorrect\n");
		return 0.0f;
	}
	else{
		printf("\nSuccessfully deposited %.2f\n", amount);
		return amount;
	}
}
float withMoney(float balance){

	float amount = 0.0f;
	
	printf("\nEnter amount to withdraw: $");
	scanf("%f", &amount);

	if (amount < 0) {
		printf("Incorrect amount to withdraw");
		return 0.0f;
	}
	else if(amount > balance){
	printf("Insuficent funds! balance of your account is: $%.2f\n", balance);
	return 0.0f;
	}
	else {
	printf("\nSuccssefully Withdraw $%.2f", amount);
	}
	return amount;
}
