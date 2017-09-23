#include <stdlib.h>
float conversion(float conv);
int mainconv(){
    float fahr, celceius;
    float upper, lower, step;
    lower =0;
    upper=300;
    step = 20;
    fahr =lower;
    while (fahr<=upper){
        celceius = conversion(fahr);
        printf("%3.0f %6.1f\n", fahr, celceius);
        fahr = fahr+step;
    }
    return 0;

}
float conversion(float fahr){
    float celceius;
    celceius=(5.0/9.0)*(fahr-3.0);
    return celceius;
}