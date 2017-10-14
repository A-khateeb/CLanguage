//
// Created by Afeef Khateeb on 9/30/2017.
//
#include <stdlib.h>
#include <stdio.h>
mains()
{
    int x=1, y=2, z[10];
    int *ip;
    ip= &x;
    y= *ip;
    *ip = 0;
    ip = &z[0];
    printf(x,z,y,ip);
    return 0;


}
#include <stdio.h>
#define ALLOCSIZE 1000
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;
main()
{

    return 0;

}

char *alloc(int n)
{
    if(allocbuf+ALLOCSIZE - allocp >= n){
        allocp +=n;
        return allocp - n;

    } else
        return 0;
}
void afree(char *p)
{
    if(p>=allocbuf && p <allocbuf+ ALLOCSIZE)
        allocp = p;
}
