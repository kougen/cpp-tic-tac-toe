#include "boardoperations.h"
#include <curses.h>
#include <locale.h>
#include <ncurses.h>
int main() {

  int height, width;
  initscr(); // Initialize ncurses mode
  getmaxyx(stdscr, height, width);

  // Print out the width and height of the terminal
  printw("Width: %d\n", width);
  printw("Height: %d\n", height);
  getch(); // Wait for a key press

  setlocale(LC_ALL, ""); // Set locale to the environment's default
  printBoard(height, width);
  //
  refresh(); // Refresh the screen to show the changes
  getch();   // Wait for a key press

  endwin(); // End ncurses mode
  return 0;
}
