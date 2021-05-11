#include "stdio.h"

int main(int argc, char** argv)
{
  #error compile error pull request
  printf("hello world");
  if (argc > 1) {
    printf(", %s", argv[1]);
  }
  printf("\n");
  printf("test github pull request 8 from systemarima\n");
  return 0;
}
