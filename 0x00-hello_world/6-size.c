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

 printf("Size of a char: " sizeof(charexample));
 printf("Size of an int: " sizeof(intexample));
 printf("Size of a long int: " sizeof(longexample));
 printf("Size of a long long int: " sizeof(llexample));
 printf("Size of a float: " sizeof(floatexample));
return (0);
}
