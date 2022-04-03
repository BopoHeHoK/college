#include <stdio.h>

#include "colors.h"
#include "picture.h"

void draw_picture(int picture[PICTURE_H][PICTURE_W]) {
  for (int y = 0; y < PICTURE_H; ++y) {
    for (int x = 0; x < PICTURE_W; ++x) {
      set_color(picture[y][x]);
      printf("  ");
    }
    printf("\n");
  }
  reset_color();
}

int main(int argc, char **argv) {
  draw_picture(picture);
  return 0;
}
