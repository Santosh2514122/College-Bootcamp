#include<stdio.h>

       int factorial(int n)
       {
        if(n==0 || n==1)//base(condition)
         {
            return 1;
         }
         return n* factorial(n-1);

       }

 int main()
 {
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("%d",factorial(n));
 }
 //enter the number:5
  //120
