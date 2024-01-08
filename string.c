#include <stdio.h>

// int main () {
//   // 따옴표 하나로 문자 하나를 감싼다.
//   char c = 'A';
//   char d = 65;

//   // 문자로 출력 할 수도 있고 정수로도 출력할 수 있다.
//   printf("%c %hhd\n", c, c);
//   printf("%c %hhd\n", d, d);

//   // ASCII 문자에 숫자를 더해 문자를 출력하면 아스키 테이블에 맞는 문자를 출력할 수 있다.
//   printf("%c \n", c + 1);


//   char a = '\a';
//   printf("%c", a);

//   float salary;
//   // 백스페이스로 커서가 뒤로 움직여서 기다리게 된다!!
//   printf("$______\b\b\b\b\b\b");
//   scanf("%f", &salary);

//   // \t는 줄을 맞춰주는 용도이다.
//   printf("AB\tCDEF\n");
//   printf("ABC\tDEF\n");

//   return 0;
// }


int main () {
  // char는 글자(문자) 하나만 들어가기에 You like B만 나온다!
  // 담을 공간이 부족하기에 한 글자만 남고 잘려나간다.
  char fruit_name;  // stores only one character

  // 배열을 쓰지
  // 배열은 같은 데이터 타입의 공간을 여러개 할당하는 것이다.
  // fruit_names[40] 배열로 받으면 이거 자체가 주소가 되어 버리는 것이다.
  // fruit_names 자체가 주소다!!!!
  char fruit_names[40];

  printf("What is your favorate fruit?\n");

  // C 표준에서는 형식 지정자라는 말보다는 conversion specifier라는 표현을 쓴다.
  // 검색 떄는 format specifier를 많이 나온다! 둘다 알면 좋다
  scanf("%c", &fruit_name); // 주소를 넘겨줘야 하니 &를 꼭 붙이자 

  printf("What is your favorate fruit?\n");
  // 여러개의 나열된 문자를 받을 것임 %s(string)
  scanf("%s", fruit_names); // 배열을 넘길 떄는 엔퍼센드가 없어도 된다...

  printf("You like %c\n", fruit_name);

  // 문자 배열로!
  printf("You like %s\n", fruit_names);

  return 0;
}