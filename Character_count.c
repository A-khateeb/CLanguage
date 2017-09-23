#include <stdio.h>
main_cha(){
    long cc;
    cc = 0;
    while(getchar()!=EOF){
        ++cc;
        printf("%1d\n",cc);
    }
}