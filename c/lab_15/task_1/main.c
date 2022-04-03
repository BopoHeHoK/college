#include <stdio.h>

enum {
  TABLE_W = 20,
  TABLE_H = 20
};

void init_table(int table[TABLE_H][TABLE_W]) {
  for (int y = 0; y < TABLE_H; ++y)
    for (int x = 0; x < TABLE_W; ++x)
      table[y][x] = (y + 1) * (x + 1);
}

void print_table(int table[TABLE_H][TABLE_W]) {
  // header
  printf("%4c", ' ');
  for (int x = 0; x < TABLE_H; ++x)
    printf("%-3d ", table[0][x]);
  printf("\n");

  // upper border
  printf("%3c%c", ' ', '+');
  for (int x = 0; x < TABLE_H; ++x)
    printf("----");
  printf("\n");
  
  for (int y = 0; y < TABLE_H; ++y) {
    // left border
    printf("%-3d|", table[y][0]);
    for (int x = 0;x < TABLE_W; ++x)
      printf("%-3d ", table[y][x]);
    printf("\n");
  }
}

int main(int argc, char **argv) {
  int table[TABLE_H][TABLE_W] = { 0 };
  init_table(table);
  print_table(table);
  
  return 0;
}
