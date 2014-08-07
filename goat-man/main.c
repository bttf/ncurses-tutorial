/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  entry point for goat-man demo
 *
 *        Version:  1.0
 *        Created:  08/06/2014 08:40:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bttf
 *
 * =====================================================================================
 */
#include <ncurses.h>
#include "warp.h"

int main() {
  int ch;

  initscr();
  raw();
  keypad(stdscr, TRUE);
  noecho();

  mvprintw(LINES / 2, COLS / 2, "testing 1 2 3");
  refresh();
  display_warp_engine_diagnostics();

  getch();
  endwin();

  return 0;
}
