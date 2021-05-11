#include "stdio.h"

int main(int argc, char** argv)
{
  printf("hello world");
  if (argc > 1) {
    printf(", %s", argv[1]);
  }
  printf("\n");
  printf("test github pull request 2\n");
  return 0;
}
