#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);
void do_wall(int);

int main(void)
{
  int height = get_positive_int();
  do_wall(height);
}

int get_positive_int(void)
{
  int n;
  do
  {
    n = get_int("Height: ");
  } while (n < 1);
  return n;
}

void do_wall(int height)
{
  for (int i = 0; i < height; i++)
  {
    for (int j = 0; j < height - i - 1; j++)
    {
      printf(" ");
    }

    for (int k = 0; k <= i; k++)
    {
      printf("#");
    }
    printf("\n");
  }
}