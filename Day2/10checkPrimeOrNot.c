// check prime number
#include<stdio.h>
int main()
{ int n ,i,flag=1; //flag=1 true 
 printf("enter the number:");
 scanf("%d",&n);
 if(n<=1)
    {
    flag=0;
    }
    else 
     {
       for(int i=2;i*i<=n;i++)
       {
        if(n%i==0)
        {
         flag=0;
         break;
         }
       }
     }

   if(flag )
   printf("prime\n");
   else
   printf(" not prime\n");
   return 0;
}