#include <stdio.h>
#include "printValue.h"

int main() {
  char *hello = "test";

  printValue((char **)&hello);

  return 0;
}