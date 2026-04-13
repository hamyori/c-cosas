#include <stdio.h>
#include <string.h>

int main() {
//palabras game, crearesmo una historia a partir de los inputs del usuario
//asi nos recordaremos de las string y como manejarlas correctamente jajajaja!!!
	char noun[26] = "";
	char verb[26] = "";
	char adjective1[26] = "";
	char adjective2[26] = "";
	char adjective3[26] = "";

	
	printf("Enter an noun name (animal or person): ");
	fgets(noun, sizeof(noun), stdin);
	noun[strlen(noun) -1 ] = '\0';

	printf("Enter an verb (ending with w/ -ing: ");
	fgets(verb, sizeof(verb), stdin);
	verb[strlen(verb) -1 ] = '\0';
	
	printf("Enter an adjective (description): ");
	fgets(adjective1, sizeof(adjective1), stdin);
	adjective1[strlen(adjective1) -1 ] = '\0';
	
	printf("Enter an adjective (description): ");
	fgets(adjective2, sizeof(adjective2), stdin);	
	adjective2[strlen(adjective2) -1 ] = '\0';	

	printf("Enter an adjective (description): ");
	fgets(adjective3, sizeof(adjective3), stdin);
	adjective3[strlen(adjective3) -1 ] = '\0';
	
	printf("\nToday was a %s day into the school.\n", adjective1);
	printf("Here i see at %s!.\n", noun);
	printf("%s say me that him was %s and %s.\n", noun, adjective2, verb);
	printf("Was a %s moment!\n", adjective3);

	return 0;
}
