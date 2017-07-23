#include <stdio.h>
mainchar(){
    int c;
    c = getchar();
    while (c!=EOF){
        putchar(c);
        c =getchar();
    }
    return 0;

}