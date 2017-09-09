#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100

int getch(void);
int sp =0;
double val[MAXVAL];
int getop(char s[]);
void push(double);
double pop(void);
void ungetch(int);

mainss()
{
    int type;
    double op2;
    char s[MAXOP];
    while ((type=getop(s))!=EOF){

        switch (type)
        {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop()+pop());
                break;
            case '*':
                push(pop()*pop());
                break;
            case '-':
                op2 =pop();
                push(pop()-op2);
                break;
            case '/':
                op2 =pop();
                if( op2 != 0.0)
                    push(pop()/op2);
                else
                    printf("Error: Zero Division \n");
                break;
            default:
                printf("Error: Unknown command %s\n", s);
                break;
        }
    }
    return 0;
}

void push(double f){
    if(sp< MAXVAL)
        val[sp++] =f;
    else
        printf("Error: Stack is full cannot push %g\n",f);
}
double pop(void)
{
    if(sp>0)
        return val[--sp];
    else{
        printf("Error: Stack empty\n");
        return 0.0;

    }
}

int getop(char s[]){
    int i,c;
    while ((s[0] = c = getch()) ==' ' || c == '\t')
        ;
    s[1] = '\0';
    if(!isdigit(c) && c != '.')
        return c;
    i=0;
    if(isdigit(c))
        while (isdigit(s[++i] = c = getch()))
    ;

    if(c == '.')
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if( c != EOF)
        ungetch(c);
    return NUMBER;
}
