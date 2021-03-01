#include<iostream>
using namepsace std;
// Made some Changes
int
main ()
{
  int i, j;
  int c = 0;
  int n = 9;
  int a[n], p;
  for (i = 1; i < 10; i++)
    {
      a[c] = i;
      c++;
      cout << i << " ";
      if (i % 3 == 0)
	{
	  cout << "\n";
	}
    }				//End of Assigning

  for (i = 1; i < 10; i++)
    {
      cin >> p;			//Input 
      if (i % 2 == 1)
	{
	  a[p] = 20;
	}
      if (i % 2 == 0)
	{
	  a[p] = 30;
	}
    }
  for (i = 1; i < 10; i++)
    {
      cout << "a[" << i << "]: " << a[i] << "\n";
    }
  return 0;
}