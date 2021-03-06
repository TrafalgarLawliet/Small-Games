#include <iostream>

using namespace std;
int main()
{
  int i, j; //For Loop
  int indexValue;
  //char cross = "X", zero = "O";
  int player = 1; //For Input from Users
  char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  i = 0;
  do
  {
    player = (player % 2) ? 1 : 2; //Selecting the Player
    cout << "Player " << player << " turn: ";
    cin >> indexValue;

    if (board[indexValue] != 'X' || board[indexValue] != 'O')
    {
      if (player == 1)
      {
        board[indexValue] = 'X';
      }
      else if (player == 2)
      {
        board[indexValue] = 'O';
      }
    }
    i++, player++; //Updating the Board and Selecting the player
  } while (i < 9);

  cout << endl;

  cout<<"BOARD\n";
  cout<<board[1]<<" "<<board[2]<<" "<<board[3]<<"\n";
  cout<<board[5]<<" "<<board[5]<<" "<<board[6]<<"\n";
  cout<<board[7]<<" "<<board[8]<<" "<<board[9]<<"\n";

  return 0;
}