#include <stdio.h>

void print_something_else(void);

int add(int a, int b) {
  return a + b;
}

void print_something(void) {
  printf("Something!\n");
}

int main() {
  const int a = 10;
  const int b = 20;

  int sum = add(a, b);

  printf("The sum of %d and %d is %d.\n", a, b, sum);

  print_something();

  print_something_else();

  return 0;
}

void print_something_else(void) {
  printf("Something else!\n");
}