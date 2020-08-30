#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - simple calculator
 * @argc: number of arguments
 * @argv: array arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{

  int arg1, arg3, r;
  int (*f)(int, int);

  if (argc != 4)
  {
    printf("Error\n");
    exit(98);
  }

  arg1 = atoi(argv[1]);
  arg3 = atoi(argv[3]);
  f = get_op_func(argv[2]);

  if (f == NULL)
  {
    printf("Error\n");
    exit(99);
  }

  r = f(arg1, arg3);
  printf("%d\n", r);
  return (0);
}
