#include <stdio.h>
#include <ctype.h>
#include "BS V2.c"
#include "Switch Case .c"
#include "Ctype Code .c"
#include "Reverse Sting.c"
main()
{
    mainstring();
    printf("insert a value");
    getchar();
    return 0;

    /*mainsss();
    mainss();
    mains();
    */

}
/*
int atoi(char s[]){
    int i,n,sign;
    for(i=0;isspace(s[i]);i++)
        ;
    sign =(s[i]=='-') ? -1: 1;
    if(s[i]=='+' || s[i]=='-')
        i++;
    for(n=0;isdigit(s[i]);i++)
        n=10*n+(s[i]- '0');
    return sign *n;
}
 */