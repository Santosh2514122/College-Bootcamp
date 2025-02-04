//check tringle base om side or angle
#include<stdio.h>
int main()
{ int  a,b,c;
  int d,e,f;
 printf("enter the   angle of tringle:");
 scanf("%d%d%d",&a,&b,&c);
     if((a+b+c==180 && a>0 && b>0 && c>0)|| a+b>c && b+c>a && a+c>b)//check conditionllllllll.
       {
        printf(" tringle base angle tringle");
       }
    else
     {
      printf("tringle base on side:"); 
      }
}