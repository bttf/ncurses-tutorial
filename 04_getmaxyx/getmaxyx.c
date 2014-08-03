/*
 * =====================================================================================
 *
 *       Filename:  getmaxyx.c
 *
 *    Description:  demo of getmaxyx method of ncurses lib
 *
 *        Version:  1.0
 *        Created:  08/02/2014 08:55:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bttf
 *
 * =====================================================================================
 */

#include <ncurses.h>
#include <string.h>

int main() {
  char msg[] = "eat shit";
  int row, col;

  initscr();
  getmaxyx(stdscr, row, col);
  mvprintw(row / 2, (col - strlen(msg)) / 2, "%s", msg);
  mvprintw(row - 2, 0, "This screen has %d rows and %d cols, ya heard.", row, col);
  refresh();
  getch();
  endwin();

  return 0;
}
