#include <stdio.h>

    int main() 
    {
      int a = 5;
      int &r = a;
      int c[5];
      int (&tr) [5] = c;
      printf("%d\n",&tr);

      return 0;
    }