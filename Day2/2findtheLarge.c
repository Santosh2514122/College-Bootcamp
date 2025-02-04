//find the largest nubmer 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the  three number:");
    scanf("%d%d%d",&a,&b,&c);
    int greater=(a>b&&b>c)?a:(b>c)?b:c;//check condition
    printf("greatest element%d:greatest");
    return 0;
}