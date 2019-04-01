 #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>

  int main() 
  {
    int c[5];
    int i;
    srand(time(NULL));

    for(i=0;i<5;i++)
    {
      c[i]=rand()%100+1;
    }

    for(i=0;i<5;i++)
    {
      printf("%d\n",c[i]);
    }

    return 0;
  }