#include <stdio.h>
#include <string.h>

#define WIDTH 30
#define NAME "Dong Hyun Kim"
#define ADDRESS "Seoul, Korea"

// 함수 선언 및 정의
void print_bar()
{
  printf("***************************\n");
}

// 함수 선언 및 정의
void print_bar_v2(int n_stars)
{
  for (int i = 0; i < n_stars; i++)
    printf("*");

  printf("\n");
}
// 위 printf_bar_v2, print_blank는 하나만 다르다! 합치자
void print_blank(int n_blank)
{
  for (int i = 0; i < n_blank; i++)
    printf(" ");

  printf("\n");
}

void print_multiple_chars(char c, int n_starts)
{
  for (int i = 0; i < n_starts; i++)
    printf("%c", c);
}

void print_centered_str(char str[])
{
  print_multiple_chars(' ', (WIDTH - strlen(str)) / 2);
  printf("%s\n", str);
}

int main()
{
  // 1.
  printf("***************************\n");
  printf("        Dong Hyun Kim\n");
  printf("        Seoul, Korea\n");
  printf("***************************\n");

  printf("\n");

  // 2.
  print_bar();
  printf("        Dong Hyun Kim\n");
  printf("        Seoul, Korea\n");
  print_bar();

  printf("\n");

  // 3.
  print_bar_v2(WIDTH);
  printf("        Dong Hyun Kim\n");
  printf("        Seoul, Korea\n");
  print_bar_v2(WIDTH);

  printf("\n");

  // 4.
  print_bar_v2(WIDTH);
  printf("        %s\n", NAME);
  printf("        %s\n", ADDRESS);
  print_bar_v2(WIDTH);

  printf("\n");

  // 5.
  print_multiple_chars('*', WIDTH);
  // 아래 printf 가 거슬리니 함수로 리팩토링 해도 된다!
  printf("\n");

  // n_blanks = (WIDTH - strlen(NAME)) / 2;
  // print_multiple_chars(' ', n_blanks);
  // printf("%s\n", NAME);

  // n_blanks = (WIDTH - strlen(ADDRESS)) / 2;
  // print_multiple_chars(' ', n_blanks);
  // printf("%s\n", ADDRESS);

  // 하나의 함수로 리팩토링
  print_centered_str(NAME);
  print_centered_str(ADDRESS);

  // 인사말 추가할 시 함수 한 줄만 추가하면 된다.
  // 또한 이 함수를 다른 프로그램이나 파일에서도 사용할 수 있게 된다!!
  print_centered_str("I Love You");

  print_multiple_chars('*', WIDTH);

  printf("\n");

  return 0;
}

// 일반화의 관점에서 개선할 수 있도록 고려하기
// 같은 기능이 여러번 나오면 안된다. <- 유지보수가 어려움.

// * 이 30개가 되면 어떡할까?
// 사람의 이름이 번경되면 어떡할까?

// 1. * 찍는 동일한 기능을 하는 것이 있으니 함수로 묶자

// 간단한 코드로 작성이 되어 있는데 함수가 2개 더 생기고 좀 더 길어졌다.
// 하지만 더 나은 프로그래머가 되기 위해서는
// 내가 만든 프로그램이 더 일반적으로 작성하려면 어떻게 해야 될까?
// 장기적으로 유지보수가 더 쉬우려면 어떻게 해야 할지를 고려해야 된다