#include<stdio.h>
int main()
{
     int n;
   printf("enter the number:");
   scanf("%d",&n); 
   if(n>0 &&(n&(n-1))==0 ){
   printf(" is power of two:");
   }
   else
 {
 printf(" is not  power of two:");
 
 }
 return 0;
 }