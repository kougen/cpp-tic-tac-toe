#include <iostream>

using namespace std;

void offlineMode(string player1, string player2) {
    bool isRunning = true;

    int takenSpots = 0, whosNext = 0;
    char A[32][62];//matrix for storing the data of the game as it plays out.
    bool B[3][3] = {0};
    while (isRunning) {
        int column, row;
        cout << "Offline mode with players: " << player1 << " and " << player2
             << endl;

        if (takenSpots == 0)//Putting the starter board on the console, aswell as saving it in a matrix.
        {
            cout << endl;
            for (int i = 0; i < 32; i++) {
                for (int j = 0; j < 62; j++) {
                    if ((j == 21 || j == 42) && (i != 11 || i != 22)) {
                        cout << "|";
                        A[i][j] = '|';
                    } else if ((i == 11 || i == 22) && (j != 21 || j != 42)) {
                        cout << "-";
                        A[i][j] = '-';
                    } else {
                        cout << " ";
                        A[i][j] = ' ';
                    }
                }
                cout << endl;
            }
        } else {
            for (int i = 0; i < 32; i++) {
                for (int j = 0; j < 62; j++) {
                    cout << A[i][j];
                }
                cout << endl;
            }
        }
        if (whosNext % 2 ==
            0)//So they know who is next, and we can use it later aswell to know if the next symbol is an X or O.
            cout << endl << "[" << player1 << " (X)]" << endl;
        else
            cout << endl << "[" << player2 << " (O)]" << endl;

        cout << "Enter the number of the column you want to place your piece in: ";
        cin >> column;

        if (column < 1 || column > 3)//If they give a different number than how many columns we have.
        {
            while (column < 1 || column > 3) {
                cout << "The range of the column is 1-3." << endl;
                cout << "Enter the number of the column you want to place your piece in: ";
                cin >> column;
            }
        }

        cout << "Enter the number of the row you want to place your piece in: ";
        cin >> row;

        if (row < 1 || row > 3)//If they give a different number than how many rows we have.
        {
            while (row < 1 || row > 3) {
                cout << "The range of the row is 1-3." << endl;
                cout << "Enter the number of the row you want to place your piece in: ";
                cin >> row;
            }
        }

        cout << "You placed your piece in column " << column << " and row " << row
             << endl;
        if (B[column][row] == 0)//if that spot already has a symbol than ask for another one that is not occupied.
            B[column][row] = 1;
        else {
            while (B[column][row] != 0) {
                for (int i = 0; i < 32; i++) {
                    for (int j = 0; j < 62; j++) {
                        cout << A[i][j];
                    }
                    cout << endl;
                }
                cout << "That spot is already occupied. Try another one." << endl;
                if (whosNext % 2 ==
                    0)//So they know who is next, and we can use it later aswell to know if the next symbol is an X or O.
                    cout << endl << "[player 1(X)]" << endl;
                else
                    cout << endl << "[player 2(O)]" << endl;

                cout << "Enter the number of the column you want to place your piece in: ";
                cin >> column;

                if (column < 1 || column > 3)//If they give a different number than how many columns we have.
                {
                    while (column < 1 || column > 3) {
                        cout << "The range of the column is 1-3." << endl;
                        cout << "Enter the number of the column you want to place your piece in: ";
                        cin >> column;
                    }
                }

                cout << "Enter the number of the row you want to place your piece in: ";
                cin >> row;

                if (row < 1 || row > 3)//If they give a different number than how many rows we have.
                {
                    while (row < 1 || row > 3) {
                        cout << "The range of the row is 1-3." << endl;
                        cout << "Enter the number of the row you want to place your piece in: ";
                        cin >> row;
                    }
                }

                cout << "You placed your piece in column " << column << " and row " << row
                     << endl;
            }
            B[column][row] = 1;
        }
        // TODO: Game logic starts/goes here!
        if (whosNext % 2 == 0)//In this we will have to put 9 "if"s to check which cell the symbol has been put in.
        {
            if (column == 1 && row == 1) {
                for (int i = 0; i < 11; i++) {
                    for (int j = 0; j < 21; j++) {
                        if (j < 21 && i < 11) {
                            if ((j == 2 || j == 18) && (i == 2 || i == 10)) {
                                A[i][j] = '*';
                            } else if (((j == 4 || j == 16) && (i == 3 || i == 9))) {
                                A[i][j] = '*';
                            } else if (((j == 6 || j == 14) && (i == 4 || i == 8))) {
                                A[i][j] = '*';
                            } else if (((j == 8 || j == 12) && (i == 5 || i == 7))) {
                                A[i][j] = '*';
                            } else if ((j == 10) && (i == 6)) {
                                A[i][j] = '*';
                            }
                        }
                    }
                }
            } else if (column == 1 && row == 2) {
                for (int i = 0; i < 11; i++) {
                    for (int j = 21; j < 41; j++) {
                        if (j < 41 && i < 11) {
                            if ((j == 23 || j == 39) && (i == 2 || i == 10)) {
                                A[i][j] = '*';
                            } else if (((j == 25 || j == 37) && (i == 3 || i == 9))) {
                                A[i][j] = '*';
                            } else if (((j == 27 || j == 35) && (i == 4 || i == 8))) {
                                A[i][j] = '*';
                            } else if (((j == 29 || j == 33) && (i == 5 || i == 7))) {
                                A[i][j] = '*';
                            } else if ((j == 31) && (i == 6)) {
                                A[i][j] = '*';
                            }
                        }
                    }
                }
            } else if (column == 1 && row == 3) {
                for (int i = 0; i < 11; i++) {
                    for (int j = 43; j < 62; j++) {
                        if (j < 62 && i < 11) {
                            if ((j == 44 || j == 60) && (i == 2 || i == 10)) {
                                A[i][j] = '*';
                            } else if (((j == 46 || j == 58) && (i == 3 || i == 9))) {
                                A[i][j] = '*';
                            } else if (((j == 48 || j == 56) && (i == 4 || i == 8))) {
                                A[i][j] = '*';
                            } else if (((j == 50 || j == 54) && (i == 5 || i == 7))) {
                                A[i][j] = '*';
                            } else if ((j == 52) && (i == 6)) {
                                A[i][j] = '*';
                            }
                        }
                    }
                }
            }
        } else if (whosNext % 2 == 1 && takenSpots == 1) {

        }
        whosNext++;
        takenSpots++;
        //Here starts the winner score counter and etc. like player1 wins:2 player2 wins:1
        /*cout << "Do you want to play again? (y/n) ";
        char answer;
        cin >> answer;
        isRunning = (answer == 'y' || answer == 'Y');*/
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