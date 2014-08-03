#include <ncurses.h>

int main() {
  initscr();
  printw("Hello Verld!");
  refresh();
  getch();
  endwin();

  return 0;
}

