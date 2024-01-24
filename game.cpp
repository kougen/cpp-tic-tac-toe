#include <iostream>

using namespace std;

void offlineMode(string player1, string player2) {
  cout << "Offline mode with players: " << player1 << " and " << player2
       << endl;
}

int main() {
  string username;
  cout << "Enter your username: ";
  cin >> username;

  cout << "Do you want to play in Offline mode (1) or Online mode (2)? ";
  int mode;
  cin >> mode;

  if (mode == 1) {
    string username2;
    cout << "Enter the username for player 2: ";
    cin >> username2;
    offlineMode(username, username2);
  } else if (mode == 2) {
    cout << "Online mode under development!" << endl;
    return 0;
  } else {
    cout << "Invalid mode" << endl;
    return 1;
  }
}
