//
// Created by Afeef Khateeb on 9/30/2017.
//
#include <stdlib.h>
#include <stdio.h>
mains()
{
    int x=1, y=2, z[10];
    int *ip;
    ip= &x;
    y= *ip;
    *ip = 0;
    ip = &z[0];
    printf(x,z,y,ip);
    return 0;


}