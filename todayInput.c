#include <linux/limits.h>
#include <stdio.h>
#include <string.h>
#include <threads.h>
#include <strings.h>

int main() {

int age = 0;
float gpa = 0.0f;
char grade = '\0';
char name[30] = "";

printf("Enter your age: ");
scanf("%d", &age);

printf("Entert your gpa: ");
scanf("%f", &gpa);

//el espacio en blanco es pa que ignore el salto en linea y se asigne los valores correctamente
printf("Enter your grade: ");
scanf(" %c", &grade);

/*voy a cambiar el fist name for the full name, wiht this
we can see how white space are some that need pay attention
in short is some like que el scanf no puede leer espacios en blanco y por eso ingnora todo lo demas. 
printf("Enter your fist name pleb: ");
scanf("%s", &name); */

//no tenemos el lujo de limpiar el bufer soolo con un espacio en blanc
//como mas arriba \n
getchar();
printf("Enter your full name pleb: ");
fgets(name, sizeof(name), stdin);
//deleting the last character for skip new line char \n
name[strlen(name) -1 ] = '\0'; //name = Dep Che\0

printf("%s\n", name);
printf("%d\n", age);
printf("%.2f\n", gpa);
printf("%c\n", grade);

return 0;

}
