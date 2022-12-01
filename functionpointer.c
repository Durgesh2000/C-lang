#include<stdio.h>
//Function Defination
void fun()
{

printf("Inside Fun\n");

}



int main ()
{

 fun ();  //Function call

 void (*fptr)();
 //fptr is a pointer which
 //points to the function
 // that function accepts nothing
 // and that function returns nothing.
 fptr = fun;
 fptr();
 
    return 0;
}