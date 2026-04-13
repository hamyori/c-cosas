#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int choice = 0;
	float pounds = 0.0f;
	float kilograms =0.0f;
	float kilo = 2.20463;

	printf("Weight converter calculator!\n");
	printf("1 for pounds to kilograms:\n");
	printf("2 for kilograms to pounds\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	if(choice ==  1){
		printf("Enter your weight in pounds: ");
		scanf("%f", &pounds);
		kilograms = pounds / kilo; 
		printf("%.2f pounds is eqaual to %2.f kilograms", pounds, kilograms);
	}
	else if(choice == 2){
		printf("Enter your weight in kilograms: ");
		scanf("%f", &kilograms);
		pounds = kilograms * kilo;
		printf("%.2f kilograms is equal to %.2f pounds", kilograms, pounds);
	}
	else{
		printf("Invalid Choice retarded!!!!");
	}
return 0;
}
