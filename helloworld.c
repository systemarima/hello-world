#include "stdio.h"

int main(int argc, char** argv)
{
  printf("hello world");
  if (argc > 1) {
    printf(", %s", argv[1]);
  }
  printf("\n");
  return 0;
}
