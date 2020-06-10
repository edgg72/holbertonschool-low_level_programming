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

printf("Size of a char:%d ", sizeof(charexample));
printf("Size of an int:%d ", sizeof(intexample));
printf("Size of a long int:%d ", sizeof(longexample));
printf("Size of a long long int:%d ", sizeof(llexample));
printf("Size of a float:%d ", sizeof(floatexample));
return (0);
}
