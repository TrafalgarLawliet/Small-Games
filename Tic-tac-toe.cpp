#include<iostream>
using namepsace std;
int main()
{
  int i, j;
  int c = 0;
  int n = 9;
  int a[n];
  for (i = 1; i < 10; i++)
    {
      a[c] = i;
      c++;
      cout << i << " ";
      if (i % 3 == 0)
	{
	  cout << "\n";
	}
    }
  for (i = 0; i < 9; i++)
    {
      cout << "a[" << i + 1 << "]: " << a[i] << "\n";
    }
  return 0;
}
