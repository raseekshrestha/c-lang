#include <stdio.h>
#include <stdlib.h>



int main(){
	int r1=2,c1=2,r2=2,c2=2;s
	int A[r1][c1],B[r2][c2];

	if (c1!=r2){
		printf("Matrix of order %d*%d and %d*%d cannot be multiplied\n",r1,c1,r2,c2);
		exit(0);
	}
	printf("Enter matrix A of order %d*%d\n",r1,c1 );
	for (int i=0;i<r1;i++){
		for (int j=0;j<c1;j++){
			scanf("%d",&A[i][j]);
		}
	}

	printf("Enter matrix B of order %d*%d\n",r2,c2 );
	for (int i=0;i<r2;i++){
		for (int j=0;j<c2;j++){
			scanf("%d",&B[i][j]);
		}
	}
	system("clear");

	printf("Matrix A is \n");
	for (int i=0;i<r1;i++){
		for (int j=0;j<c1;j++){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	printf("Matrix B is \n");
	for (int i=0;i<r2;i++){
		for (int j=0;j<c2;j++){
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}


	int C[r1][c2],elem;
	// matrix multiplication starts here
	for (int i=0;i<r1;i++){
		for (int j=0;j<c2;j++){
			elem=0;
			for (int k=0;k<r2 ;k++){
				elem += A[i][k] * B[k][j];
			}
			C[i][j] = elem;

		}
	}



	printf("Matrix A*B=\n");
	for (int i=0;i<r1;i++){
		for (int j=0;j<c2;j++){
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}


	return 0;

}
