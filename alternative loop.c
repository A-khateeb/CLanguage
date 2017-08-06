//
// Created by Afeef Khateeb on 8/5/2017.
//

#include <stdio.h>
#define MAXLINE 1000
mainS(){
    int c,i;
    char lines[MAXLINE];

    i=0;
    while(i<MAXLINE-1) {
        if ((c = getchar()) == EOF)
            break;
        lines[i++] = c;
        if (c == '\n')
            break;
    }
    lines[i]= '\0';
    printf("%s\n",lines);
    return 0;
}