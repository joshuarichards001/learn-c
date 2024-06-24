#include <stdio.h>

int main()
{
  // int x = 10;
  // int *ptr1 = &x;
  // int **ptr2 = &ptr1;

  // printf("%d\n", **ptr2);

  int x = 7;
  int *p = &x;
  int y = *p;

  printf("%d\n", y); // 4

  return 0;
}
