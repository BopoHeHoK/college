#include <stdio.h>

#include "colors.h"

void reset_color() {
  printf("\033[0m");
}

void set_color(colors_t color) {
  printf("\033[0;4%dm", color);
}

