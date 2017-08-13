//
// Created by Afeef Khateeb on 8/13/2017.
//
#include <stdio.h>
#include <string.h>
void reverse(char s[]);
mainstring()
{
    reverse("Hello");


}
void reverse(char s[]){
    int c, i, j;
    for (i=0,j = strlen(s)-1;i<j;i++,j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;

    }
}
