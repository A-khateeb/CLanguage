#include <stdio.h>
#include "head.c"
#include "temconverter.c"
int main(){

    smain();
    tem();
    printf("Hello, ");
    printf("World!");
    printf("\n");

    printf("New Line\n");

    printf("Hello, ");
    printf("World!");
    printf("\\");

    printf("New Line\n");

    printf("Hello, ");
    printf("World!");
    printf("\"");

    printf("New Line\n");

    printf("Hello, ");
    printf("\b");
    printf("World!");
    printf("\b");

    printf("New Line\n");

    printf("Hello, ");
    printf("\t");
    printf("World!");
    printf("\t");
    return 0;
}
