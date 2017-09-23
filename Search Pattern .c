#include <stdio.h>
#define MAXLINE 1000
int getthose(char line[], int lim);
int strindex(char source[], char searchfor[]);
char pattern[]="ould";

main()
{
    char line[MAXLINE];
    int found =0;
    while (getthose(line, MAXLINE)>0)
        if(strindex(line,pattern)>=0){
            printf("%s",line);
            found++;

        }
    return found;
}

int getthose(char s[],int lim)
{
    int c,i;
    i=0;
    while(--lim > 0 && (c=getchar()) !=EOF && c != '\n')
        s[i++]=c;
    if(c == '\n')
        s[i++]=c;
    s[i] ='\0';
    return i;
}

int strindex(char s[],char t[]){
    int i,j,k;
    for(i=0;i<s[i]!='\0';i++){
        for(j=0,k=0 ; t[k]!='\0' && s[j]==t[k];j++,k++)
            ;
        if(k>0 && t[k]=='\0')
            return i;

    }
    return -1;

}