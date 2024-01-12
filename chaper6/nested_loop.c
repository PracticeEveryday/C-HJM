#include <stdio.h>

int main() 
{
  for(int i = 0; i < 7; i++) {
    for(char c = 'A'; c <= 'K'; c++)
    {
      printf("%c ", c); 
    }
    printf("\n");
  }
  
  return 0;
}