#include<stdio.h>
/**
*main - printing sizes for exercise 6
*Return: - returning an int
*/

int main(void)
{
char charexample;
int intexample;
long longexample;
long long llexample;
float floatexample;

printf("Size of a char: %ld byte(s)\n", sizeof(charexample));
printf("Size of an int: %ld byte(s)\n", sizeof(intexample));
printf("Size of a long int: %ld byte(s)\n", sizeof(longexample));
printf("Size of a long long int: %ld byte(s)\n", sizeof(llexample));
printf("Size of a float: %ld byte(s)\n", sizeof(floatexample));
return (0);
}
