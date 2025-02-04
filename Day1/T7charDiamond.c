#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
for( int i=1;i<=n;i++)//for row
    { 
        for(int j=1;j<=n-i;j++)//forspace
        {
            printf(" ");
        }
        for(int k=1;k<=(2*i)-1;k++)//for(*)
        {
            printf("*");
        }
        printf("\n");
      }
for( int i=n-1;i>=1;i--)
    { 
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i)-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
ter the number4
   *
  ***
 *****
*******
 *****
  ***
   *
PS C:\Users\santo\One*/