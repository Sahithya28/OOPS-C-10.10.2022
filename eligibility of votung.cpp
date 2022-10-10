#include<stdio.h>
int main()
{
  int age;

  printf("enter your age:");
  scanf("%d",&age);
  if (age<18)
     {
       printf("You are not allowed to your vote.\n");
       printf("You are allowed to vote after %d year.\n",18-age);
     }
  else
     printf("You are allowed to your vote.\n");
}
