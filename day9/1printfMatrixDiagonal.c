#include <stdio.h>
int main()
{
    int R=3;
    int C=3;
	int arr[3][3] = {{1,2,3,},
					 {4,5,6},
					 {7,8,9}};

	for(int i = 0; i < 3; i++)//row
	{
		for(int j = 0; j < 2; j++)//colu
		{
            {
            printf("%d",arr[i][j]);
            }
            printf("/n");
		}
	}
	return 0;
}
