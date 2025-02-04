//check charecter is upper case,lowcase,and special case;
#include<stdio.h>
int main()
{
  char ch;
 printf("enter the  charecter:");
 scanf("%c",&ch);
  if(ch>='A'&& ch<='Z')
  {
    printf("upper case:\n");
  }
  else if (ch>='a'&& ch<='z')
  {
    printf("lower case");
  }
  else
  {
    printf("special charecter \n");
  }
 return 0;
}