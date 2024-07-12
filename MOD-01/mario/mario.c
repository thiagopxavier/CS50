#include <cs50.h>
#include <stdio.h>

int main(void)
{
  // v1 - print 4 times "?"
  /*
  for (int i = 0; i < 4; i++)
  {
    printf("?");
  }
  printf("\n");
  */

  // v2 - print a interactive "?"
  /*
  int n;
  do
  {
    n = get_int("Width: ");
  } while (n < 1);

  for (int i = 0; i < n; i++)
  {
    printf("");
  }
  printf("\n");
  */

  // v3 - print a # wall
  /*
  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        printf("#");
      }
      printf("\n");
    }
  */
}