#include<stdio.h>
int main()
{int n;
printf("enter the numbe of row");
scanf("%d",&n);
for( int i=1;i<=n;i++)//row 
    {
for(int j=n;j>=i;j--)//colum
     {
        printf("*");
     }
      printf("\n");
    } 



}
/*enter the numbe of row3
***
**
*
*/
