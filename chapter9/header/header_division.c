// 해당 파일 안에서 print_hello, hi~~를 알려줘야한다.

// 헤더 파일만 include하는 방법임
// print_functions.c를 알지 못함!!
#include <stdio.h>
#include "print_functions.h"

int main()
{
  print_hello();
  print_hi();
  print_hello();
  print_hi();
  print_str("No one lives forever.");
  print_str("valar morgulis.");

  return 0;
}