#include <stdio.h>
void strcat(char s[], char t[]);
mainstr() {

    strcat("hehehehhehe","sd]sdsdasd");
    return 0;
}
void strcat(char s[], char t[]) {
    int i, j;
    while (s[i] != '\0')
        i++;
    while ((s[i++] = t[j++]) != '\0');

}
