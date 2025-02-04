
#include<stdio.h>

void hollowPyramid(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        // Print leading spaces
        for (j = 0; j < n - i - 1; j++)
            printf(" ");
        
        // Print stars and spaces
        for (j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0 || j == i || i == n - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    hollowPyramid(n);
    return 0;
}
//reverce of hollow tringle
/*Enter the number of rows: 5
    * 
   * * 
  *   * 
 *     * 
* * * * * 
*/