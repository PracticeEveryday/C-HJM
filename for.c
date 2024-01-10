#include <stdio.h>

int main() {
  printf("1\n");
  printf("2\n");
  printf("3\n");
  //...
  printf("100\n"); // ??
  // 천번 숫자를 바꿔야함..

  int n = 1;

  // 아래문장 copy and paste
  // 코드가 반복되고 있다!
  printf("%d \n", n);
  n = n+1;

  printf("%d \n", n);
  n = n+1;

  printf("%d \n", n);
  n = n+1;

  printf("%d \n", n);
  n = n+1;
  // 1000번 복사 붙여넣기 해야함..

  // --------------------- goto --------------------------
  // 고전 적인 방법 <- 반복적으로 갔으면 좋겠다! go to
  // 라벨을 달고
  label:
  printf("%d \n", n);
  n = n + 1;

  // out 라벨로 가라
  // 도망 나오는 조건까지 달아준다.
  if(n == 10) goto out;

  // 라벨로 가라
  goto label;
  // 실제 goto 문을 쓰지 않지만, 실제 컴퓨터 내부에서 구현을 할 때는 goto 처럼 구현이 된다!
  // 눈으로 따라기도 어렵고 코드가 복잡해지기에 잘 사용하지 앟는다.
  out:
  // --------------------- goto --------------------------


  // ---------------------- while--------------------
  // while의 조건이 참일 때마다 블록 안의 로직을 수행해라!
  while (n < 11)
  {
    printf("%d \n", n);
    // 조건에 들어가는 변수가 변하는 조건을 꼭 기재해 주어야 한다
    // 변하는 조건이 없으면 영원히 돈다.. ⚠️ 무한 루프 주의!
    n = n + 1;
  }
  




  
  return 0;
}