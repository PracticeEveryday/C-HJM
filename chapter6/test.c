#include <stdio.h>

int main () {
  int input = 0;
  int sum = 0;
  // int status;

  printf("Enter an integer (q to quit): ");

  // scanf는 입력 받은 변수의 개수가 몇개 인지를 리턴한다.
  // status = scanf("%d", &input); // 만약에 문자 q가 들어온다면 정수로 입력받을 수가 없기에 입력을 안받는다 0이 된다!

  // while (status == 1) // equality operator
  while (scanf("%d", &input) == 1) // while 문 안에서 scanf를 호출하고 반환된 값을 1과 같은지 비교하고 맞으면 실행하구나!
  {
    // 복합문
    sum += input;

    printf("Enter next integer (q to quit): ");
    // status = scanf("%d", &input);
  }

  printf("Sum = %d\n", sum);

  // TODO: C-style shortcut
  // scanf 자체를 while문에 넣어준다!!
  // 그럼 하나의 scanf 문장으로 해결할 수 있다!
  return 0;
}