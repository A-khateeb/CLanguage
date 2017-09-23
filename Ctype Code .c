//
// Created by Afeef Khateeb on 8/13/2017.
//
#include <stdio.h>
#include <ctype.h>
mainsss(){
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
   printf(atoi("Hello world of programmers"));
    return 0;
}

