#include <stdio.h>

int main(){
    int A[3][3],B[3][3],C[3][3];
    printf("Enter mat A\n");
	for (int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
            scanf("%d",&A[i][j]); 
        }
    }
    printf("Enter matrix b\n");
    for (int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
            scanf("%d",&B[i][j]); 
        }
    }
    printf("matrix c is \n");
    for (int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
            printf("%d\t",A[i][j]+B[i][j]); 
            // printf("");
        }
        printf("\n");
    }
        
    
    
    
    
}