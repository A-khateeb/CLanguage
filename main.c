#include <stdlib.h>
#include <stdio.h>

main()
{

    printf("Insert a value");
    int x=1, y=2, z[10];
    int *ip;
    ip= &x;
    y= *ip;
    *ip = 0;
    ip = &z[0];
    printf(z,y,ip);
    getchar();
    return 0;
}