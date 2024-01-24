#include <iostream>

using namespace std;

void offlineMode(string player1, string player2) {
  bool isRunning = true;

  while (isRunning) {
    int column, row;

    cout << "Offline mode with players: " << player1 << " and " << player2
         << endl;

    cout << "Enter the number of the column you want to place your piece in: ";
    cin >> column;
    cout << "Enter the number of the row you want to place your piece in: ";
    cin >> row;

    cout << "You placed your piece in column " << column << " and row " << row
         << endl;

    // TODO: Game logic goes here!

    cout << "Do you want to play again? (y/n) ";
    char answer;
    cin >> answer;
    isRunning = (answer == 'y' || answer == 'Y');
  }
}

int main() {

  string username;
  cout << "Enter your username: ";
  cin >> username;

  do {
    cout << "Do you want to play in Offline mode (1) or Online mode (2) or end "
            "the game (3)? ";
    int mode;
    cin >> mode;

    if (mode == 1) {
      string username2;
      cout << "Enter the username for player 2: ";
      cin >> username2;
      offlineMode(username, username2);
    } else if (mode == 2) {
      cout << "Online mode under development!" << endl;
    } else if (mode == 3) {
      cout << "Goodbye!" << endl;
      return 0;
    } else {
      cout << "Invalid input!\n" << endl;
    }

  } while (true);
}
