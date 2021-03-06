/*
 * =====================================================================================
 *
 *       Filename:  mvprintw.c
 *
 *    Description:  demonstrating mvprintw method of ncurses lib
 *
 *        Version:  1.0
 *        Created:  08/02/2014 08:29:16 PM
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
  initscr();
  cbreak();
  noecho();

  printw("Gimme a character");
  ch = getch();
  clear();

  int i = 0;
  while (true) {
    mvprintw(0 + i, 0 + i, "%c", ch);
    i++;
    getch();
  }
}

