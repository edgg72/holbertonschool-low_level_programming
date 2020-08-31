#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  prints the minimum number of coins
 *         to make change for an amount of money.
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
  int coin, count;

  count = 0;
  if (argc != 2)
  {
    printf("Error\n");
    return (1);
  }

  coin = atoi(argv[1]);
  if (coin < 0)
  {
    printf("%d\n", 0);
    return (0);
  }

  if (coin % 25 >= 0)
  {
    count += coin / 25;
    coin = coin % 25;
  }

  if (coin % 10 >= 0)
  {
    count += coin / 10;
    coin = coin % 10;
  }

  if (coin % 5 >= 0)
  {
    count += coin / 5;
    coin = coin % 5;
  }

  if (coin % 2 >= 0)
  {
    count += coin / 2;
    coin = coin % 2;
  }

  if (coin % 1 >= 0)
  {
    count += coin / 1;
  }

  printf("%d\n", count);
  return (0);
}
