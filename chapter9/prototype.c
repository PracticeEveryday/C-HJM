#include <stdio.h>
#include <string.h>

#define WIDTH 30
#define NAME "Dong Hyun Kim"
#define ADDRESS "Seoul, Korea"

// 함수 및 정의 후
void print_multiple_chars(char, int); // < -프로토 타입

// 프로토타입과 몸체를 바로 구현하기
void print_centered_str(char str[])
{
  print_multiple_chars(' ', (WIDTH - strlen(str)) / 2);
  printf("%s\n", str);
}

// main에서 정의한다.
// 부품 기능들을 조합하여 프로그래밍을 하면 된다.
// 무엇이 입력되고 무엇이 출력되는 지는 알아야한다.
int main()
{
  // ✅ 컴파일을 할 때는 블랙 박스로서 함수를 알고 있어도 가능하다.
  // 즉, 위에 입, 출력(프로토타입)만 알고 있어도 컴파일링이 된다. <- 몸체가 없더라도 컴파일 에러가 나지는 않는다.
  // ⚠️ 에러는 'linking' 단계에서 터진다! 몸체가 없으니 실행 파일을 만들수가 없다!
  // 이 아이디얼르 담고 있어야! 객체 지향도 쉽게 이해할 수 있다.
  print_multiple_chars('*', WIDTH); // arguments
  printf("\n");
  print_centered_str(NAME);
  print_centered_str(ADDRESS);
  print_centered_str("I Love You");

  print_multiple_chars('*', WIDTH);

  printf("\n");

  return 0;
}

// definition을 아래로 내리는 것이 직관적으로 이해하기가 쉽다!
// 우리는 보통 main에서 작업을 하기 때문이다!
void print_multiple_chars(char c, int n_starts)
{
  for (int i = 0; i < n_starts; i++)
    printf("%c", c);
}