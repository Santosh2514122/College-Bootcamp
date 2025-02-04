//chec number is palindrom or not
#include<stdio.h>
int main()
{
    int n,rev=0,temp;
    printf("enter the number:");
    scanf("%d",&n);
    temp=n;
    while ( temp)
    {
        rev=rev * 10 + temp % 10;
        temp/=10;
    }
    if(rev==n)
    printf("palindrom\n");
    else
        printf(" not palindrom\n");
   return 0;
    
}