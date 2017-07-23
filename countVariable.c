#include <stdio.h>
#define IN 1
#define OUT 0

maincount(){
    int c, nw, nl,nc,state;
    state=OUT;
    nl=nw=nc=0;
    printf("Type some characters then press CTRL+D");
    while((c=getchar())!=EOF)
    {
        ++nc;
        if(c =='\n')
            ++nl;
        if(c==' '||c=='\n'||c=='\t')
            state=OUT;
        else if(state== OUT){
            state =IN;
            ++nw;
        }

    }
    printf("%d $d %d \n",nl,nw,nc);

    return 0;

}