#include <stdio.h>
#include <string.h>
//#include <strings.h>
int main() {
	//shopping car problem 
	char item[30] = "";
	float price = 0.0f;
	int quantyte = 0;
	char currency = 'Q';
	float total = 0.0f;

	printf("Wich product do you want?: ");
	fgets(item, sizeof(item), stdin);
	item[strlen(item) -1 ] = '\0';
		
	printf("How much it cost by each?: ");
	scanf("%f", &price);

		
	printf("How many do you like: ");
	scanf("%d", &quantyte);

	total = price * quantyte;

	printf("\nYou have bough %d %s/s\n", quantyte, item);
	printf("The total is:%c%.2f", currency, total);


return 0;
}
