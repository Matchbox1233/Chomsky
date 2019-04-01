#include <stdio.h>

    int main()
    {
        int a=5;
        int &r = a;

        printf("%d\n",r);

        return 0;
    }