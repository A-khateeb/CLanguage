//
// Created by Afeef Khateeb on 8/19/2017.
//
#include <stdio.h>
#define MAXLINE 1000
int getlines(char input[], int max);
int sourceindex(char source[], char searchfor[] );
char pattern[]="ouhr";
mainsearchs(){

    char line[MAXLINE];
    int found=0;
    while (getlines(line,MAXLINE)>0)
        if(sourceindex(line,pattern)>=0){
            printf("%s",line);
            found++;
        }
    return found;
}

int getlines(char s[], int lim){
    int c,i;
    i=0;
    while(--lim>0&&(c=getchar())!=EOF && c!='\n')
        s[i++] =c;
    if(c=='\n')
        s[i++]=c;
    s[i]='\0';
    return i;
}
int sourceindex(char s[], char t[]) {
    int i, k, j;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);
    if (k > 0 && t[k] == '\0')
        return i;
}
    return -1;
}