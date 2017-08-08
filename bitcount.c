//
// Created by Afeef Khateeb on 8/7/2017.
//
#include <stdio.h>
mainsS()
{
    int bitcount(unsigned x){
        int b;
        for (b=0;x!=0;x>>1)
            if(x &01)
                b++;
        return b;
    }

}
