#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main(){
	//ROCK PAPER SCISSORS 
	srand(time(NULL));

	printf("ROCK PAPER SCISSORS GAME!!!");
	
	int userChoice = getUserChoice();
	int computerChoice = getComputerChoice();

	switch (userChoice) {
		case 1:
			printf("You choose paper!\n");
			break;
		case 2:
			printf("You choose rock!\n");
			break;
		case 3:
			printf("You choose scissors!\n");
	}

	switch (computerChoice) {
		case 1:
			printf("Computer choose paper!\n");
			break;
		case 2:
			printf("Computer choose rock!\n");
			break;
		case 3:
			printf("Computer choose scissors!\n");
	}

	checkWinner(userChoice, computerChoice);

	return 0;
}

int getComputerChoice(){
	return (rand() % 3) + 1;
}

int getUserChoice(){

	int choice = 0;

	do {
	printf("Choose an option!\n");
	printf("1. Is Rock.\n");
	printf("2. Is Paper.\n");
	printf("3. Is Scissors.\n");
	printf("Enter Your Choice: ");
	scanf("%d", &choice);
	}while(choice < 1 || choice > 3);

	return choice;
}

void checkWinner(int userChoice, int computerChoice){
	if (userChoice == computerChoice){
		printf("It's a TIE!!!");
	} 
	else if ((userChoice == 1 && computerChoice == 3) ||
		 (userChoice == 2 && computerChoice == 1) ||
		 (userChoice == 3 && computerChoice == 2)){
		printf("You WIN!!!");	
	}else 
	printf("You LOSE!!!");
}
