#include<stdio.h>

 void mixPyramid( int n)
 {
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<n-i;j++)
     printf("*");
    for(int j=0;j<2*i+1;j++)
      printf(" ");
     for(int j=0;j<n-i;j++)
      printf("*");
     printf("\n");
    }
   //inverse of above 
 for(int i=0;i<n;i++)
    {
   for(int j=0;j<i+1;j++)
     printf("*");
    for(int j=0;j<2*(n-i)-1;j++)
      printf(" ");
     for(int j=0;j<i+1;j++)
      printf("*");
     printf("\n");
    }
 }
int main()
{
int n;
printf("enter the value of n");
scanf("%d",&n);
mixPyramid(n);
return 0;
}
/*enter the value of n4
**** ****
***   ***
**     **
*       *
*       *
**     **
***   ***
**** ****
*/
