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
result = atoi(argv[1]) * atoi(argv[2]);
if (argc != 3)
{
puts("Error");
return (1);
}
else
{
printf("%d\n", result);
}
return (0);
}
