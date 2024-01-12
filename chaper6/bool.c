#include <stdio.h>
#include <stdbool.h> // stdbool.h(header)
int main() {
  int i;
  // 대입 연산자 vs 비교 연산자 차이 <- 등호 개수
  i = 5;
  i == 5;

  // 5 literal constant는 L-value로 사용할 수 없다
  // 문법 오류 생성!
  // must be L-value!
  // 5 = i;
  // 같냐를 비교하기에 문법 오류가 없다!
  5 == i;

  i = 4;
  // i 에 5를 대입해버림 5를 대입하면 true로 간주해 i는 5가 되어 무한 루프에 돈다
  // 권한을 최대한 주고 막지 않는다!
  // 자유롭게 책임도 프로그래머가 져라!!
  // 그니까 나는 i에 5 넣고 표현식의 값은 5니까 무한루프 돌릴게 가 되는 것이다.
  // while (i = 5)
  // {
  //   printf("%d\n", i);
  //   if(i == 5) {break};
  //   /* code */
  // }

  while (i == 5)
  {
    /* code */
  }

  // _Bool자료형이 나오기 전에 사람들이 bool 같은 타입을 따로 사용하고 있었기 때문에
  // 이를 피해기 위해 언더스코어와 b를 대문자로 사용하여 호환성을 유지한 것이다!
  // c99에 bool이라는 자료형을 표준으로 넣어버리면 기존과 출동하고 호환이 안되기 때문에
  // _Bool이 나왔다!
  _Bool boolean_true = (2 > 1);
  _Bool boolean_false = (2 < 1);


  // _Bool 자료형도 내부적으로는 전부 정수형으로 처리 된다!
  // _Bool 자료형을 위한 형식 변환자가 없어서 %d로 써야한다..
  printf("True is %d\n", boolean_true);
  printf("False is %d\n", boolean_false);


  // true로 보고 싶으면 이렇게 봐야함.
  printf("%s\n", boolean_true ? "true" : "false");
  printf("%s\n", boolean_false ? "true" : "false");

  // 키워드는 파란색으로 나온다.
  // 너무 많이 쓰고 있어서 표준으로 정립시켜 포함해준것이다.
  bool bt = true;
  bool bf = false;

  return 0;
}