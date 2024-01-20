#include <stdio.h>

int main()
{
  // https://www.youtube.com/watch?v=3v9F0ShDRUM&ab_channel=TheDigitalFolks
  int arr[] = {1, 3};
  int *ptr = arr;

  printf("%p\n", ptr);
  printf("*(ptr++) = %d\n", *(ptr++));
  // printf("*(ptr++) = %d\n", *ptr);

  return 0;
}