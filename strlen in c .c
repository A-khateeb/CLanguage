//
// Created by Afeef Khateeb on 8/3/2017.
//
#include <stdio.h>
#include <string.h>
mainlen()
{
    int strlen(char s[]){
        int i;
        while (s[i] != '\0')
            ++i;
        return i;
    }

    printf(strlen("hello world"));
}
