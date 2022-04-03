#ifndef __COLORS_H__
#define __COLORS_H__

typedef enum colors {
  BLACK = 0,
  RED = 1,
  GREEN = 2,
  YELLOW = 3,
  BLUE = 4,
  PURPLE = 5,
  CYAN = 6,
  WHITE = 7
} colors_t;

void reset_color();
void set_color(colors_t color);

#endif /* #ifndef __COLORS_H__ */
