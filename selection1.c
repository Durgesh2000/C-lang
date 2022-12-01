#include<stdio.h>
#include<stdbool.h>


// %  Mod
// == Equality

 bool checkEven(int iNo)
{
if((iNo%2)==0)
{
return true;
}
else
{
return false;
}

}

int main()
{
    int ivalue = 0;
    bool bRet;

    printf("Enter one Number\n");
    scanf("%d",&ivalue);
  
   bRet = checkEven(ivalue);
   if(bRet == true)
   {
    printf("it is even Number\n");
   }
   else
   {
    printf("it is odd number\n");
   }

    return 0;
}