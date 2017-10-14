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
