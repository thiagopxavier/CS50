#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  string s = get_string("Before: ");
  printf("After: ");

  int n = strlen(s);
  for (int i = 0; i < n; i++)
  {

    printf("%c", toupper(s[i]));
    /* if (s[i] >= 'a' && s[i] <= 'z')
    {
      printf("%c", s[i] - 32);
    }
    else
    {
      printf("%c", s[i]);
    } */
  }
  printf("\n");
}