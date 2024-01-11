#include <stdio.h>

int main() {
  int a = 0;
  // 추격형 대입 연산자
  a++;
  // a = a + 1
  // a += 1
  printf("%d\n", a);
  ++a;
  printf("%d\n", a);

  double b = 0.0f;
  b++;
  printf("%f\n", b);
  ++b;
  printf("%f\n", b);

  int count = 0;
  while (count < 10)
  //5. while (++count < 10) // 1 2 3 4 5 6 7 8 9
  //6. while (count++ < 10) //1 2 3 4 5 6 7 8 9 10 <- 비교가 끝나고 더한다.
  // 증가 되지 않은 상태에서 비교하고 while문을 돌고 더한다!!
  {
    printf("%d\n", count);
    //printf("%d\n", count++);
    //printf("%d\n", ++count);
    count++;
    // 1. count = count + 1
    // 2. count += 1
    // 3. count++
    // 4. ++count
  }


  int i = 1, j = 1;

  int i_post, pre_j;

  // 대입 하고 더해라
  i_post = i++;

  // 더하고 대입해라
  pre_j = ++j;

  printf("%d %d\n", i, j);
  printf("%d %d\n", i_post, pre_j);

  int z = 3;
  // 😁 감소 연산자는 곱하기보다 우선순위가 높다!!
  int l = 2 * --z;
  printf("%d %d\n", z, l);

  z = 3;
  // 😭 후위 연산자는 계산한 다음에 감소하기 때문에 2가 나온다<- 연산에 사용을 하고나서 감소한다!!
  l = 2 * z--;
  printf("%d %d\n", z, l);


  int x, y, u;
  x = 3, y = 4;
  z = (x + y++) * 5; // 연산을 전부 다 하고 y가 하나 증가된다!!
  printf("%d %d %d\n", x, y, z); // 3 5 35

  // ++, --는 수정 가능한 L values에서만 사용할 수 있다.
  int xx = 1, yy = 1, zz;
  zz = xx * yy++;
  // zz = (x*y)++; // 수정할 수 있는 L-value에만 가능하다.
  // (x * y) 는 연산 후에 임시적으로 R value로서 사용이 된다.
  // zz = 3++;
  printf("%d\n", zz);

  return 0;
}