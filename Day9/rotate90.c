#include<stdio.h>
#define R 3
#define C 3
void rotate_90(int mat[R][C]){
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            int temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;

        }
    }
    for(int i=0;i<R;i++){
        for(int j=0,k=C-1;j<k;j++,k--){
            int temp=mat[i][j];
            mat[i][j]=mat[i][k];
            mat[i][k]=temp;
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
    int mat[R][C]={{1,2,3},{4,5,6},{7,8,9}};
    printf("orginal matrix:");
    printMatrix(mat);
    rotate_90(mat);
    printf("\n rotate matrix:");
    printMatrix(mat);
}