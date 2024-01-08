#include <stdio.h>
#include <stdlib.h>

int main () {
  int a = 0;

  // 기본형의 메모리 크기 확인하기
  // 메모리는 1바이트에 1개
  unsigned int int_size1 = sizeof a;

  // 자료형의 사이즈 보기
  // 함수가 아니라 연산자로 보는 것이 조금 더 올바를 수 있다.
  // 함수처럼 사용할 수도 있다!!
  unsigned int int_size2 = sizeof(int);
  unsigned int int_size3 = sizeof(a);

  // unsigned int sizeof가 알려주는 값의 자료형이 unsigned int가 아닐 수도 있어서 size_t를 사용한다.
  // 이식성을 높이기 위해서 사용한다.
  // 즉, 다른 프로그램이나 컴파일러에서는 sizeof의 반환값이 unsigned int가 아닐 수도 있다!
  size_t int_size4 = sizeof(a);
  size_t float_size = sizeof(float);

  // %u -> unsigned
  printf("Size of int type is %u bytes \n", int_size1);

  // %zu 형식 지정자는 size_t에 대응되는 형식이다!
  printf("Size of int type is %zu bytes \n", int_size4);
  printf("Size of float type is %zu bytes \n", float_size);

  return 0;
}

int main () {
  // 배열 초기화
  // int타입으로 연결되어 있는 30개의 메모리를 할당한다.
  // 배열의 변수 이름은 30개의 메모리 공간을 대표하는 메모리의 주소를 의미한다.
  // 그 주소는 맨 앞 주소이다!
  int int_arr[30]; // 실제로 30개짜리 메모리 공간이다. 하지만 사용 할 때만 대표 메모리 주소로 바뀐다!
  // 선언되는 순간 사이즈가 30개다

  // 선언을 하고
  int *int_ptr = NULL;
  // 메모리를 얼마나 받을 지 런타임에 받는다.
  int_ptr = (int*)malloc(sizeof(int) * 30);
  // 컴파일러 입장에서는 int_ptr이 얼마의 사이즈를 받을 수 있을 지 모른다.


  // 개념상 차이가 나기에 공간을 알려주는 것은 다르다!


  printf("Size of array = %zubytes\n", sizeof(int_arr));
  // 주소를 적는 공간의 사이즈가 나온다.
  // 런타임에 얼마나 할당 받을지 동적으로 계산되기에 sizeof연산자를 실행하면 메모지의 크기를 알려주는 것이다!
  printf("Size of pointer = %zubytes\n", sizeof(int_ptr));
  return 0;
}

int main () {
  // 한 글자는 정수 숫자로 저장된다!
  char c = 'a';
  // 문자를 10개 저장할 수 있는 메모리 공간이 string 변수에 저장되어 있다.
  // 문자열을 처리하기 위해서는 마침표 역할을 하는 문자가 하나 추가되어야 한다.
  // 즉 마지막에 무조건 \0가 저장되고 실제로 저장할 수 있는 사이즈는 9개이다!
  char string[10];

  size_t char_size = sizeof(c);
  size_t str_size = sizeof(string);

  
  printf("Size of char type %zu bytes\n", char_size);
  printf("Size of string type is %zu bytes\n", str_size);

  return 0;
}