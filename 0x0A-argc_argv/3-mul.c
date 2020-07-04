#include <stdio.h>
#include <stdlib.h>
/**
 * main - pmultiplies two numbers.
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
int result;
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
result = num1 * num2;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", result);
}
return (0);
}
