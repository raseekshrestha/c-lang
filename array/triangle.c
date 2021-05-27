#include <stdio.h>

int main(){
    int A[3][3],sum=0;
    printf("Enter mat A\n");
	for (int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
            scanf("%d",&A[i][j]); 
        }
    }


    for (int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
            printf("%d\t",A[i][j]); 
        }
        printf("\n");
    }

    // for lower triangular
    for (int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
            if (j>i){
                sum += 1;
            }
            // printf("%d\t",A[i][j]+B[i][j]); 
            // printf("");
        }
        printf("\n");
    
    }
    if (sum > 0){
        printf("lower tranggular\n");
    }  

}
