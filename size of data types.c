//
// Created by Afeef Khateeb on 8/2/2017.
//
#include <stdio.h>
#include <limits.h>

int mainsab(void)
{
    printf("The range of signed char is [%d,%d]\n",SCHAR_MIN, SCHAR_MAX);
    printf("The range of unsigned char is [%u,%u]\n",0,UCHAR_MAX);
    printf("The range of char is [%d,%d]\n",CHAR_MIN,CHAR_MAX);

    printf("The range of signed short int is [%hd, %hd]\n", SHRT_MIN,SHRT_MAX);
    printf("The range of unsigned short int is [%hu, %hu]\n", 0,USHRT_MAX);

    printf("The range of signed  int is [%d, %d]\n", INT_MIN,INT_MAX);
    printf("The range of unsigned int is [%u, %u]\n", 0,UINT_MAX);

    printf("The range of Long signed int is [%ld, %ld]\n", LONG_MIN,LONG_MAX);
    printf("The range of Long unsigned int is [%lu, %lu]\n", 0,ULLONG_MAX);

    return 0;
}

