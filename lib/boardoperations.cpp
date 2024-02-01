#include "boardoperations.h"
#include <curses.h>
#include <ncurses.h>

void printO(int boardSize) {
  for (int i = 0; i < boardSize; i++) {
    for (int j = 0; j < boardSize; j++) {

      if (i == 0 || i == boardSize - 1) {
        if (j == 0 || j == boardSize - 1) {
          cout << " ";
        } else {
          cout << "-";
        }
      } else {
        if (j == 0 || j == boardSize - 1) {
          cout << "|";
        } else {
          cout << " ";
        }
      }
    }
    cout << endl;
  }
}

void printBoard(int height, int width) {

  int boardSize = height > width / 2 ? width / 2 : height;
  int fieldSize = boardSize / 3;
  int n = fieldSize + 1;
  int end = (n * 3) - 2;
  int drawnLines = 1;
  int hOffset = fieldSize;
  // To be centered calculate the offset for the horizontal lines
  int hOffsetCenter = (width / 2) - (end);
  while (drawnLines < 3) {
    for (int j = 0; j < 2 * end; j++) {
      mvaddch(hOffset, j + hOffsetCenter, ACS_HLINE);
    }
    hOffset += n;
    drawnLines++;
  }

  drawnLines = 1;
  int vOffset = fieldSize * 2;
  int vOffsetCenter = (width / 2) - end;
  while (drawnLines < 3) {
    for (int j = 0; j < end + 1; j++) {
      mvaddch(j, vOffset + vOffsetCenter, ACS_VLINE);
    }
    vOffset += (n * 2) - 1;
    drawnLines++;
  }
}

void print_x() {}
