//WAP to print factors of a given number

#include<stdio.h>
int main()
{
  int num;

  printf("enter a number:");
  scanf("%d",&num);

  printf("factors of %d are:",num);

  for(int i=1;i<=num;++i)
  {
    if(num%i==0)
    {
      printf("%d",i);
    }
  }

  printf("\n");

  return 0;
}
