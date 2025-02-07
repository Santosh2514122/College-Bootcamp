#include<stdio.h>
#define R 3
#define C 3
void Transpose(int mat[R][C]){
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(i<j){
                int temp=mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]=temp;
            }
        }
    }
    return;
}
int main(){
 int mat[R][C]={{1,2,3},{4,5,6},{7,8,9}};
 printf(" print  the original matrix :\n");
 for(int i=0;i<R;i++)//
 {
      for(int j=0;j<C;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    Transpose(mat);//call functio
    printf("\n Transpose Matrix:\n");
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;


} 