/*
 * =====================================================================================
 *
 *       Filename:  getyx.c
 *
 *    Description:  demonstrating getyx method of ncurses lib
 *
 *        Version:  1.0
 *        Created:  08/02/2014 10:05:03 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bttf
 *
 * =====================================================================================
 */

#include <ncurses.h>

int main() {
  int ch;
  int y, x;

  initscr();
  printw("Gimme a char dude/dudette");
  ch = getch();
  clear();

  int i = 0;
  while(true) {
    getyx(stdscr, y, x);
    mvprintw(0 + i, 0 + i, "(%d, %d)", x, y);
    refresh();
    i++;
    getch();
  }
}
