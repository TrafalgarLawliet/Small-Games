#include <iostream>

using namespace std;
int
main ()
{
  int i, j;			//For Loop
  int indexValue;
  //char cross = "X", zero = "O";
  int player = 1;		//For Input from Users
  char board[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
  i = 0;
  do
    {
      player = (player % 2) ? 1 : 2;  //Selecting the Player
      cout<<"Player "<<player<<" turn: ";
      cin>>indexValue;
      i++, player++;  //Updating the Board and Selecting the player
    }
  while (i <= 9);
  return 0;
}