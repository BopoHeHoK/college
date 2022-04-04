#include "str.h"

#include <stdlib.h>

// calculate the length of a string without inclusion '\0'
size_t str_len(const char *s) {
  size_t len;
  
  for (len = 0; s[len]; ++len)
    ;
  
  return len;
}

// concatenate two strings
char *str_cat(const char *dest, const char *src) {
  size_t size = str_len(dest) + str_len(src) + 1; // add 1 for '\0'
  char *result = malloc(size * sizeof(char));

  if (NULL == result)
    return NULL;
  
  size_t index = 0;
  for (int i = 0; dest[i]; ++i)
    result[index++] = dest[i];
  for (int i = 0; src[i]; ++i)
    result[index++] = src[i];
  result[index] = '\0';

  return result;
}
