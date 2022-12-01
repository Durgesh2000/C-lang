#include<stdio.h>

int main()
{
   char ch = 'A';
   int i = 11;
   float f = 3.14;
   double d = 9.567;

  /* printf("value From the variable are :\n");
   printf("%c\n",ch);
   printf("%d\n",i);
   printf("%f\n",f);
   printf("%lf\n",d);*/

   printf("size of each variable\n");
   printf(" size of ch: %d\n",sizeof(ch));
   printf(" size of i : %d\n",sizeof(i));
   printf(" size of f : %d\n",sizeof(f));
   printf(" size of d : %d\n",sizeof(d));



    return 0;
}