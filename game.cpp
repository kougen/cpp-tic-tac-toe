#include <iostream>
using namespace std;

void offlineMode(string player1, string player2) {
  bool isRunning = true;

    int takenspots=0,whosnext=0;
    char A[32][62];//matrix for storing the data of the game as it plays out.
    bool B[3][3]={0};
  while (isRunning) {
    int column, row;
    cout << "Offline mode with players: " << player1 << " and " << player2
         << endl;

    if (takenspots==0)//Putting the starter board on the console, aswell as saving it in a matrix.
    {
        cout<<endl;
        for (int i=0;i<32;i++)
        {
            for (int j=0;j<62;j++)
            {
                if ((j==21||j==42)&&(i!=11||i!=22))
                    {cout<<"|";
                    A[i][j]='|';}
                else if ((i==11||i==22)&&(j!=21||j!=42))
                    {cout<<"-";
                    A[i][j]='-';}
                else
                    {cout<<" ";
                    A[i][j]=' ';}
            }
            cout<<endl;
        }
    }
    if (whosnext%2==0)//So they know who is next, and we can use it later aswell to know if the next symbol is an X or O.
        cout<<endl<<"Next:X"<<endl;
    else
        cout<<endl<<"Next:O"<<endl;

    cout << "Enter the number of the column you want to place your piece in: ";
    cin >> column;

    if (column<1||column>3)//If they give a different number than how many columns we have.
    {
        while (column<1||column>3)
        {
            cout<<"The range of the column is 1-3."<<endl;
            cout << "Enter the number of the column you want to place your piece in: ";
            cin >> column;
        }
    }

    cout << "Enter the number of the row you want to place your piece in: ";
    cin >> row;

    if (row<1||row>3)//If they give a different number than how many rows we have.
    {
        while (row<1||row>3)
        {
            cout<<"The range of the row is 1-3."<<endl;
            cout << "Enter the number of the row you want to place your piece in: ";
            cin >> row;
        }
    }

    cout << "You placed your piece in column " << column << " and row " << row
         << endl;
    if (B[column][row]==0)//if that spot already has a symbol than ask for another one that is not occupied.
        B[column][row]=1;
    else
    {
        while (B[column][row]!=0)
        {
             for (int i=0;i<32;i++)
            {
                for (int j=0;j<62;j++)
                {
                    cout<<A[i][j];
                }
                cout<<endl;
            }
            cout<<"That spot is already occupied. Try another one."<<endl;
             if (whosnext%2==0)//So they know who is next, and we can use it later aswell to know if the next symbol is an X or O.
                cout<<endl<<"Next:X"<<endl;
            else
                cout<<endl<<"Next:O"<<endl;

            cout << "Enter the number of the column you want to place your piece in: ";
            cin >> column;

            if (column<1||column>3)//If they give a different number than how many columns we have.
            {
                while (column<1||column>3)
                {
                    cout<<"The range of the column is 1-3."<<endl;
                    cout << "Enter the number of the column you want to place your piece in: ";
                    cin >> column;
                }
            }

            cout << "Enter the number of the row you want to place your piece in: ";
            cin >> row;

            if (row<1||row>3)//If they give a different number than how many rows we have.
            {
                while (row<1||row>3)
                {
                    cout<<"The range of the row is 1-3."<<endl;
                    cout << "Enter the number of the row you want to place your piece in: ";
                    cin >> row;
                }
            }

            cout << "You placed your piece in column " << column << " and row " << row
                    << endl;
        }
        B[column][row]=1;
    }
    // TODO: Game logic starts/goes here!
    if (whosnext%2==0&&takenspots==0)//In this if we check if the symbol is a X or O, and we will have to put 9 "if"s to check which cell the symbol has been put in.
    {

    }
    else if (whosnext%2==1&&takenspots==1)//In this we will have to use 9 "if"s to check which cell has been occupied, beacuse for every different cell we will have to change the A matrix's empty spaces and each cell has a different coordination range.
    {

    }
    whosnext++;
    takenspots++;
    //Here starts the winner score counter and etc. like player1 wins:2 player2 wins:1
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