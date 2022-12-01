#include<stdio.h>

int main ()
{
  int no = 11;


  // printf("%d\n",no);// varibale  made konti value store ahe te   
  // printf("%d\n",sizeof(no));
  //printf("%d\n",&no);
    
    int *p = &no;
    
    printf("%d\n",no);//11
    printf("%d\n",p);//100
    printf("%d\n",&no);//100
    printf("%d\n",&p);//200
    printf("%d\n",sizeof(no));//4
    printf("%d\n",sizeof(p));//8
    
    
    
    
    return 0;
}