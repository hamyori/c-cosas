#include <stdio.h>
#include <math.h>

int main() {
	
	double principal = 0.0;
	double rate = 0.0;
	int years = 0;
	int timesCompounded = 0;
	double total = 0.0;

	printf("Compound interest calculator!\n");

	printf("Enter the principal (P):");
	scanf("%lf", &principal);

	printf("Enter the interest '%' rite (R): ");
	scanf("%lf", &rate);
	rate = rate / 100;

	printf("Enter the number of years: ");
	scanf("%d", &years);

	printf("Enter the number of compoundes per year: ");
	scanf("%d", &timesCompounded);

	total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);
	printf("After %d years the total will be $%.2lf",years, total);



return 0;
}
