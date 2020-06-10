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

printf("Size of a char:%ld ", sizeof(charexample));
printf("Size of an int:%ld ", sizeof(intexample));
printf("Size of a long int:%ld ", sizeof(longexample));
printf("Size of a long long int:%ld ", sizeof(llexample));
printf("Size of a float:%ld ", sizeof(floatexample));
return (0);
}
