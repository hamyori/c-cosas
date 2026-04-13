#include <stdio.h>
#include <math.h>

int main() {
	
	char gettempe = '\0';
	float fahrenheit = 0.0f;
	float celcius = 0.0f;

	printf("Tempertature converter!\n");
	printf("F to fahrenheit\n");
	printf("C to celsius.\n");
	printf("Is the temperature fahrenheit (F) or celsius (C)?: ");
	scanf("%c", &gettempe);

	if(gettempe == 'F') {
		printf("Enter the temperature in Fahrenheit (F): ");
		scanf("%f", &fahrenheit);
		celcius = (fahrenheit - 32) * 5 / 9; //farhe to Cel 
		printf("%.1f farhenheit is equal to %.1f celcius\n", fahrenheit, celcius); 
	}
	else if(gettempe == 'c') {
		printf("Enter the temperature in Celcius (F): ");
		scanf("%f", &celcius);
		fahrenheit = (celcius *  9 / 5) + 32; //celsius to farh
		printf("%.1f celcius is equal to %1.f farhemhite!\n", celcius,  fahrenheit);
	}
	
	else {
		printf("You chooice is wrong!");
	}
return 0; 
}
