//
// Created by Afeef Khateeb on 8/6/2017.
//
#include <stdio.h>
void squeeze(char s[],int c){
    int i,j;
    for (i=j=0;s[i]!='\0';i++)
        if(s[i] !=c)
            s[j] = s[i];
    j++;
    s[j] = '\0';

    char a = "1111";
    int c ='1234';
    printf(squeeze(a,c));
}

