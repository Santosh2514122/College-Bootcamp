#include<stdio.h>
#include<math.h>
 int powerOftwoNumber(int n)
 {
    if (n==0) //base condition
    return 1;
    else
    return 2*powerOftwoNumber(n -1);
 }
  int main()
  {
    powerOftwoNumber(5);
    printf("%d",powerOftwoNumber(5));
  }