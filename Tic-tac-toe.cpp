#include <iostream>

using namespace std;

char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int winningLogic(char board[])
{
  if (board[1] == board[2] && board[2] == board[3] ||
      board[4] == board[5] && board[5] == board[6] ||
      board[7] == board[8] && board[8] == board[9] ||
      board[1] == board[4] && board[4] == board[7] ||
      board[2] == board[5] && board[5] == board[8] ||
      board[3] == board[6] && board[3] == board[9] ||
      board[1] == board[5] && board[5] == board[9] ||
      board[3] == board[5] && board[5] == board[7])
  {
    return 1;
  }
  else if (board[1] != '1' && board[2] != '2' && board[3] != '3' &&
           board[4] != '4' && board[5] != '5' && board[6] != '6' &&
           board[7] != '7' && board[8] != '8' && board[9] != '9')
  {
    return 0;
  }
  return -1;
}

int main()
{
  char mark;
  int i, j; //For Loop
  int indexValue;
  //char cross = "X", zero = "O";
  int player = 1; //For Input from Users
  i = 0;

  do
  {
    player = (player % 2) ? 1 : 2; //Selecting the Player
    cout << "Player " << player << " turn: ";
    cin >> indexValue;

    mark = (player == 1) ? 'X' : 'O';

    if (board[indexValue] != 'X' || board[indexValue] != 'O')
    {
      if (player == 1)
      {
        board[indexValue] = mark;
      }
      else if (player == 2)
      {
        board[indexValue] = mark;
      }
    }
    player++; //Updating the Board and Selecting the player
    i = winningLogic(board);
  } while (i == -1);

  cout << endl;

  cout << "BOARD\n";
  cout << board[1] << " " << board[2] << " " << board[3] << "\n";
  cout << board[5] << " " << board[5] << " " << board[6] << "\n";
  cout << board[7] << " " << board[8] << " " << board[9] << "\n";
  cout << endl;
  if (i == 1)
  {
    cout << "Player " << --player << " Won";
  }
  else
  {
    cout << "Draw!";
  }
  return 0;
}