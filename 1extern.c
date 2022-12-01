#include<stdio.h>
// No1 is a integr Which defined external
// to this file

extern int No1;
extern int No2;
//function Declaration
//Demo is a function which acceps nothing
//which returns nothing is external to this file
extern void Demo();

int main()
{
    Demo();// function call
    printf("value of No1 : %d\n", No1);
    printf("value of No2 : %d\n", No2);

    return 0;
}