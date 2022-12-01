#include<stdio.h>

enum days {mon, tus, wed, thu};

int main()
{
  enum days obj;

  int salary [] = {200,450,250,780};

  printf("size of enum %d\n",sizeof(obj));
  printf("Mon : %d\n",mon);
  printf("tus : %d\n",tus);
  printf("wed : %d\n",wed);
  printf("thu : %d\n",thu);

  printf("My salary on Wed is %d\n",salary[2]);
  printf("My salary on Wed is %d\n",salary[wed]);
  

    return 0;
}