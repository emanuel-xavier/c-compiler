#include "compiler.h"
#include <stdio.h>

int main() {
  int res = compile_file("./test.c", "./test", 0);
  if (res == COMPILE_FILE_COMPILED_OK)
    printf("everything compiled fine\n");
  else if (res == COMPILE_FAILED_WITH_ERRORS)
    printf("Compile failed\n");
  else
    printf("Unknow response from compile file\n");

  return 0;
}
