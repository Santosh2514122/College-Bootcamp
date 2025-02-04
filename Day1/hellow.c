#include<stdio.h>
int main()
{
 int length, width;
 printf("enter the :");
 scanf("%d",&length);
 printf("enter the width:");
 scanf("%d",&width);
 for( int i=0;i<length;i++)
 {
    for( int j=0;j<length;j++)
    {
        if(j==0||j==length-1||j==0||j==width-1)
        {
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
 }

 return 0;
}