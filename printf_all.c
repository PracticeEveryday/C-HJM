#include<stdio.h>
#include<limits.h>
#include<float.h>

int main () {
  double d = 3.141592653897923120710375091293190385902479139421983719365916389f;

  printf("%c\n", 'A');
  printf("%s\n", "I love you");

  // 문자 열이 길면 백슬래시를 통해 이어 사용할 수 있다!
  printf("Evenf if there's a small chance, \
we owe this to everyone who's not in this room to try.\n");

  printf("\n");
  printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX);
  printf("%u %u %u \n", 1024, -1, UINT_MAX);
}