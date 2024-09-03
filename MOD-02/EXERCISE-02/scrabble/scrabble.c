#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

string refactor_word(string word);
int compute_score(string word);

int main(void)
{
  // Solicitar ao usuário duas palavras
  int p1 = compute_score(refactor_word(get_string("Player 1: ")));
  int p2 = compute_score(refactor_word(get_string("Player 2: ")));

  // Imprimir o vencedor

  if (p1 > p2)
  {
    printf("Player 1 wins!\n");
  }
  else if (p1 < p2)
  {
    printf("Player 1 wins!\n");
  }
  else
  {
    printf("Tie!\n");
  }
}

string refactor_word(string word)
{
  string refactored = word;

  for (int i = 0; i < strlen(word); i++)
  {
    refactored[i] = toupper(word[i]);
  }
  return refactored;
}

int compute_score(string word)
{
  // Calcular os pontos de cada palavra
  int score = 0;
  for (int i = 0; i < strlen(word); i++)
  {
    score += POINTS[(int)word[i] - 65];
  }

  return score;
}