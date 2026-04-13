#include <stdio.h>
#include <ctype.h>

int main(){
	// Quiz game llooooll
	char questions[][100] = {"What is the most largest planet on the solar system?",
				"What is the most hottest planet?", 
				"What plannet has the most moons?",
				"Is the earth flat?"};
	
	char options[][100] = {"A. Jupiter\nB. Saturn\nC. Mars\nD. Earth",
				"A. Saturn\nB. Venus\nC. Mercury\nD. Sun",
				"A. Earth\nB. Mars\nC. Saturn\nD. Jupiter",
				"A. Yes\nB. No\nC. Maybe\nD. Is a perfect sphere"};
	
	char answerKey[] = {'A', 'B', 'C', 'B'};

	int cuestionsCounts = sizeof(questions) / sizeof(questions[0]);

	char guess = '\0';
	int score = 0;

	printf("*** QUIZZ GAME!!! ***\n");

	for (int i = 0; i < cuestionsCounts; i++){
		printf("\n%s\n", questions[i]);
		printf("\n%s\n", options[i]);
		printf("\nEnter Your Choice: ");
		scanf(" %c", &guess);

		guess = toupper(guess);
		
		if (guess == answerKey[i]){
			printf("Correct!!!\n");
			score++;
		}
		else{
			printf("Grong!!!\n");
		}
	}

	printf("Your score is %d out of %d points\n", score, cuestionsCounts);


	return  0;
}
