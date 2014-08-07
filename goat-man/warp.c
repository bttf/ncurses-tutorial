/*
 * =====================================================================================
 *
 *       Filename:  warp.c
 *
 *    Description:  warp drive simulator for goat-man
 *
 *        Version:  1.0
 *        Created:  08/06/2014 08:57:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bttf
 *
 * =====================================================================================
 */
#include "warp.h"

int warp_factor = 0;
WINDOW *warp_win;

void test_drive() {
  mvprintw(LINES - 1, 0, "Is this what you asked for?");
}

void display_warp_engine_diagnostics() {
  warp_win = newwin(LINES / 4, COLS, (3 * LINES) / 4, 0);
  box(warp_win, 0, 0);
  mvwprintw(warp_win, 2,2, "check 1 2 warp drive statistics: status, bazooom\n");
  wrefresh(warp_win);
}
