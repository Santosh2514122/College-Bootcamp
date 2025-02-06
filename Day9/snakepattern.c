#include<stdio.h>
#define R 4
#define C 4
void snakepattern(int mat[R][C]){
    for(int i=0;i<R;i++){
        if(i%2==0){
            for(int j=0;j<C;j++)
            printf("%d ",mat[i][j]);
        }
        else{
            for(int j=C-1;j>=0;j--)
            printf("%d ",mat[i][j]);
        }
        }
}
void printMatrix(int mat[R][C]){
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int mat[R][C]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printf("orginal matrix:");
    printMatrix(mat);
    snakepattern(mat);
}