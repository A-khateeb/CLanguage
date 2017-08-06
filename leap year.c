//
// Created by Afeef Khateeb on 8/5/2017.
//
#include <stdio.h>
mainss(){
    int year;
    if ((year%400==0 &&year%100!=0) || year%4==0)
        printf("The year is a leap year");
    else
        printf("It is not a leap year");
    return 0;

}
