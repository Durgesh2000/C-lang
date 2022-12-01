#include<stdio.h>
void Demo()
{

    int A = 10;
    A++;
    printf("%d\n",A);//Increment the value by 1
}

void Hello()
{

    static int B = 10;
    B++;
    printf("%d\n",B);
}



int main()
{
    Demo();
    Demo();
    Demo();
    
    Hello();
    Hello();
    Hello(); 


    return 0;
}