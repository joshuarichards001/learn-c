#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x = 10;

  printf("The number %d is %s.\n", x, x % 2 == 0 ? "even" : "odd");

  printf("%zu\n", sizeof(x));

  if (x == 10)
  {
    printf("x is 10\n");
    printf("And also this happens when x is 10\n");
  }

  int i = 0;

  while (i < 10)
  {
    printf("i is now %d!\n", i);
    i++;
  }

  printf("All done!\n");

  int r;

  do
  {
    r = rand() % 100; // Get a random number between 0 and 99
    printf("%d\n", r);
  } while (r != 37);

  int goat_count = 2;

  switch (goat_count)
  {
  case 0:
    printf("You have no goats.\n");
    break;

  case 1:
    printf("You have a singular goat.\n");
    break;

  case 2:
    printf("You have a brace of goats.\n");
    break;

  default:
    printf("You have a bona fide plethora of goats!\n");
    break;
  }

  return 0;
}