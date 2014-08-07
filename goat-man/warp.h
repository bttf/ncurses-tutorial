/*
 * =====================================================================================
 *
 *       Filename:  warp.h
 *
 *    Description:  warp header file
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
#include <ncurses.h>

int warp_factor;
WINDOW *warp_win;

void test_drive();
void display_warp_engine_diagnostics();
