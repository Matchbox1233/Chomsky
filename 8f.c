 #include <stdio.h>

    int main() 
    {
      int *d[5];
      int c=**d;
      printf("%d %d\n",**d,c);

      return 0;
    }