#include <stdio.h>
#include <ctype.h>
#define MAXLINE 1000
double converter(char s[]);
main()
{
    double sum, converter(char []);
    char line[MAXLINE];
    int getlines(char line[], int max);

    sum = 0;

    while (getlines(line, MAXLINE) > 0)
        printf("\t%g\n", sum += converter(line));
    return 0;
}

double converter(char s[])
{
    double val, power;
    int i, sign;
    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }
    return sign * val / power;
}