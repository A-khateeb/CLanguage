//
// Created by Afeef Khateeb on 10/21/2017.
//
#include <stdio.h>
#include <stdlib.h>
main()
{
}
char *month_name(int n){
    static char *name[]={
            "Illegal Month",
            "January", "February", "March",
            "April", "May", "June", "July",
            "August", "September","October",
            "November", "December"};
    return ( n < 1 || n >12 ) ? name[0] : name[n];
}

