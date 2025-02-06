#include<stdio.h>
#define R 4
#define C 4
void Spiral(int mat[R][C]){
    int top=0,left=0,bottom=R-1,right=C-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++)
        printf("%d ",mat[top][i]);
        top++;
        for(int i=top;i<=bottom;i++)
        printf("%d ",mat[i][right]);
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--)
            printf("%d ",mat[bottom][i]);
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--)
            printf("%d ",mat[i][left]);
            left++;
        }
    }
    }
    int main(){
        int mat[R][C]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
        Spiral(mat);
    }
