#include <cs50.h>
#include <stdio.h>

const int TOTAL = 3;
float average(int length, int array[]);

int main(void)
{
  int scores[TOTAL];

  for (int i = 0; i < TOTAL; i++)
  {
    scores[i] = get_int("Score: ");
  }

  printf("Average: %f\n", average(TOTAL, scores));
}

float average(int length, int array[])
{
  int sum = 0;
  for (int i = 0; i < length; i++)
  {
    sum += array[i];
  }
  return sum / (float)length;
}

// Old Scores code
/* #include <stdio.h>

int main(void)
{
  int score1 = 72;
  int score2 = 73;
  int score3 = 33;

  printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
} */