#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
  // char 타입의 배열을 100개 잡아놓는다.
  // 모든 컴파일러가 뒤에 0 0 0 0을 넣어주는 것을 보장할 수 없다!
  char str1[100] = "Hello";

  // 글자수 알아서 만들어 넣어라!
  char str2[] = "Hello";
  char str3[100] = "\0";
  char str4[100] = "\n";

  // strlen의 반환 값은 size_t 이다! <- %zu 형식 변환자를 사용하자!
  // 인간에게 의미가 있는 글자수만 세주기에 마지막 \0을 빼고 세어준다!
  printf("%zu %zu\n", sizeof(str1), strlen(str1)); // 100 5
  printf("%zu %zu\n", sizeof(str2), strlen(str2)); // 6 5
  printf("%zu %zu\n", sizeof(str3), strlen(str3)); // 100 0
  printf("%zu %zu\n", sizeof(str4), strlen(str4)); // 100 1

  //----- 위 까지는 컴파일러가 사이즈를 알고 있기 떄문에 sizeof 시 100바이트를 알려주지만
  //----- 아래는 얼마나 받아오는 지 알수가 없다!
  // 메모리의 사이즈 만큼만 반환해 준다! :)

  char *str5 = (char*)malloc(sizeof(char) * 100);
  str5[0] = 'H';
  str5[4] = 'e';
  str5[3] = 'l';
  str5[2] = 'l';
  str5[1] = 'l';

  // 8 은 포인터 주소 자체의 메모리 사이즈 크기이다!!
  printf("%zu %zu\n", sizeof(str5), strlen(str5)); // 8 5

  return 0;
}