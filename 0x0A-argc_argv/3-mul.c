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
int num1, num2, r;
if (argc != 3)
{
puts("Error");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
r = num1 *num2;
printf("%d\n", r);
return (0);
}
