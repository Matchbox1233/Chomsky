#include <stdio.h>
#include <stdlib.h>

int *h ()
{
  return (int*) malloc(sizeof(int)); 
}

int main() 
{
  printf("%p\n",h());

  return 0;
}