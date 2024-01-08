#include <stdio.h>

int main () {
  int a = 1;
  // 배열 초기화 방법
  // 폴트란은 1부터 시작한다!
  // 대부분의 프로그래밍 언어는 0부터 시작! :)
  int int_arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  // 40바이트 다룰 수 있게 달라!

  printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[2]);

  // 범위를 벗어나면 안된다! 주의!
  // printf("%i\n", int_arr[1000]);
  return 0;
}

int main () {
  // 정수로 바뀌어서 저장된다!!
  char c = 'a';

  // 마지막에 null character 때문에 9개만 저장가능하다!!
  char str1[10] = "Hello";

  // 중괄호를 사용해서 초기화 가능하다!
  char str2[10] = {'H', 'i'};

  printf("%c\n", c);

  // %s <- string이다!
  printf("%s\n", str1);
  printf("%s\n", str2);

  // printf 가 str2로 들어온 문자를 한 글자씩 출력하다가 \0를 만나면 더 이상 출력하지 않는다!!
  // 즉 10칸 모두 다 출력되는 것이 아니다!!
  printf("%s%s\n", str1, str2); // HelloHi


  char str3[20] = "Hello, \0World"; // \0를 만나면 뒤에 문자는 나오지 않는다..
  printf("%s\n", str3); // Hello, 까지만 나옴
  printf("%hhi %c\n", str3[10], str3[10]);  // 114, r <- printf가 작동 할때 \0를 만나면 무시해라 이기에 안나온다
  // 실제로 메모리에는 저장되어 있다!!
  return 0;
}