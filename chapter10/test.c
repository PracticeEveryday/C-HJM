#include <stdio.h>

int main()
{
  // https://www.youtube.com/watch?v=3v9F0ShDRUM&ab_channel=TheDigitalFolks
  int arr[] = {1, 3, 5, 7, 9, 11, 13};
  int *ptr = arr;
  printf("%d\n", *ptr);   // 1
  printf("%d\n", *ptr++); // 1
  printf("%d\n", *ptr);   // 3
  printf("%d\n", *++ptr); // 5
  printf("%d\n", *++ptr); // 7
  printf("%d\n", *ptr);   // 7
  printf("%d\n", ++*ptr); // 8
  printf("%p\n", ptr);    // 8
  printf("%d\n", ++*ptr); // 9
  printf("%d\n", ptr);    // 9
  return 0;
}