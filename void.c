#include<stdio.h>

int main()
{

  char ch = 'A';
  int i = 11;
  float f = 9.09;
  double d = 89.90;


  char *cp = &ch;
  int *ip = &i;
  float *fp = &f;
  double *dp = &d;

void *vp =&ch;

  printf("value of ch : %c\n",ch);
  printf("Address of ch : %p\n",&ch);
  printf("value inside cp : %p\n",cp);
  printf("Data refer cp : %c\n",*cp);
  printf("size of  ch : %d\n",sizeof(ch));
  printf("size of  cp : %d\n",sizeof(cp));
 
  printf("Data Refer by vp:%c\n",*(char *)vp);
   
   vp =&i;

   
    return 0;
}