#include <iostream>

using namespace std;
int
main ()
{
  int i, j;			//For Loop
  //char cross = "X", zero = "O";
  int player = 1;		//For Input from Users
  char board[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
  i = 0;
  do
    {
      player = (player % 2) ? 1 : 2;
      cout << "Board: " << board[i] << "\tPlayer: " << player << "\n";
      i++, player++;
    }
  while (i <= 10);
  return 0;
}