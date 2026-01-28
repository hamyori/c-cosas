#include <stdio.h>
// variables examples web, realmente necesito practicar mas jeje
// ahora que ago con esto ??

int main() 
{

int age = 25;
int year = 2025;
int quantity = 2;

float iq = 3.5;
float steamc = 2.99;
float sauges = - 11.4;

double pi = 3.1415926535897932;
double e = 2.718281828459045;

char grade = 'A';
char symbol = '?';
char currency = 'Q';

//array in C is as storage more than one charc
//char name[] ='
char name[] = "Mady Manson";
char country[] = "Guatemala";
char email[] = "madygt123@gmail.com";

printf("You are %d years old\n", age);
printf("The current year is %d\n", year);
printf("You have ordered %d iphone 17\n", quantity);
//float numbers you can shoose the number of digits afther point with %.1f, %.2%, etc 

printf("My golden fish have an iq of %.1f\n", iq);
printf("Let's buy a %f game in steam\n", steamc);
printf("Wow my dinner have %f sauges, who eat it??\n", sauges);


//lf is longer float web, is like the last float, this is more precise, like 16 ddigits afther point.

printf("The value of pi is %.12lf\n", pi);
printf("The value of e is %.12lf\n", e);

//now here is for the printf test web
printf("Mom come here, you can see my grade%c\n", symbol);
printf("Yep son, im sure that your grade is an %c\n", grade);
printf("sure mom, how much tip %c do you want gift me\n", currency);

printf("My name is %s and i living in %s country, if you want to hire my servicies send an email at %s\n", name, country, email);


return 0;

}

