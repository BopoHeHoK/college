#include <stdio.h>
#include <stdlib.h>

enum {
  STD_ERR = 2
};

char *get_month_name(int n) {
  static char *names[12] = {
    "January", "February", "March",
    "April", "May", "June",
    "July", "August", "September",
    "October", "November", "December"
  };

  return names[n - 1];
}

int main(int argc, char **argv) {
  if (argc != 2) {
    dprintf(STD_ERR, "Error: wrong number of arguments!\n");
    return 1;
  }

  int n = atoi(argv[1]);
  
  if ((n < 1) || (n > 12)) {
    dprintf(STD_ERR, "Error: wrong month number!\n");
    return 2;
  }

  printf("%s\n", get_month_name(n));
  
  return 0;
}

