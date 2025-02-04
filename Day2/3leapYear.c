//check leap year
#include<stdio.h>
int main()
{ int n;
printf("enter the year:");
scanf("%d",&n);
if(n%4==0 && n%100!=0||n%400==0)//check condition
{
printf("leap:");
}
else
{
    printf(" not leap:");

}
}
//enter the year:2024
  //leap: