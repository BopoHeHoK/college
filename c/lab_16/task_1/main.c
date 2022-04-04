#include <stdio.h>
#include <stdlib.h>

#include "str.h"

int main(int argc, char **argv) {
  char *str1 = "hello ";
  char *str2 = "world!";

  char *res = str_cat(str1, str2);
  if (NULL == res) {
    dprintf(2, "Error: can't allocate memory!");
    return 1;
  }
  
  printf("%s + %s = %s\n", str1, str2, res);
  free(res);
  
  return 0;
}
