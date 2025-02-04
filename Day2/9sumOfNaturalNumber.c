//  sum of natural number
/*#include<stdio.h>
int main()
{
 int n,sum=0;
 printf("enter the numbet:");
  scanf("%d",&n);
  sum=(n*(n+1))/2;
 printf("sum of natural number%d\n",sum); 
  return 0;
}
*/
#include<stdio.h>
int main()
{
  int n,sum=0;
  printf("enter the number :");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  printf("sum of %d natural numer =%d",n,sum);
}