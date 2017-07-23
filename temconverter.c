#include <stdio.h>

int tem()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 2;
    printf("Fahrenheit \t");
    printf("Celsius\n");
    while (fahr <= upper){
        celsius = (5.0/9.0)*(fahr -32);
        printf("%3.0f %6.1f\n ",fahr, celsius);
        printf("\t");
        fahr = fahr +step;;
    }
    return 0;
}