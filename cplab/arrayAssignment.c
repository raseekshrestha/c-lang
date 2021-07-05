#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// q.1 init 10 nums in arr and display it
// int main(){
// 	int nums[10];
// 	for (int i=0;i<10;i++){
// 		printf("Enter number %d : ",i+1 );
// 		scanf("%d",&nums[i]);
// 	}
// 	for (int i=0;i<10;i++){
// 		printf("%d ",nums[i] );
// 	}
// 	printf("\n");
// }


// q.2 wap to readd n numbers frommm user and diplaay the numbers their sum andd average
// int main(){
// 	int n,sum=0;
// 	printf("Enter value for n : ");
// 	scanf("%d",&n);
// 	int arr[n];
// 	for (int i=0;i<n;i++){
// 		printf("Enter number %d : ",i+1 );
// 		scanf("%d",&arr[i]);
// 		sum += arr[i];
// 	}
// 	float avg = (float)sum/n;
// 	printf("sum is %d\naverage is %.2f\n",sum,avg);
// }

// q..3 ffind largest and smallest numss
// int main(){
// 	int n,largest,smallest;
// 	printf("Enter value for n : ");
// 	scanf("%d",&n);
// 	int arr[n];
// 	for (int i=0;i<n;i++){
// 		printf("Enter number %d : ",i+1 );
// 		scanf("%d",&arr[i]);
// 		if (i==0){
// 			largest = smallest = arr[0];
// 		}
// 		else{
// 			if (largest < arr[i]){
// 				largest = arr[i];
// 			}
// 			if (smallest > arr[i]){
// 				smallest = arr[i];
// 			}
// 		}
// 	}
// 	printf("smallest num is %d\nlargest num iss %d\n",smallest,largest );
// }


// q.4 wap to search item in array
// int main(){
// 	char arr[5][20] = {"random","pandas","os","sys","time"};
// 	char query[20];
// 	int found = 0;
// 	printf("Enter term to search : ");
// 	scanf("%s",query);
// 	for (int i=0;i<5;i++){
// 		if (strcmp(arr[i],query)==0){
// 			printf("match found \n");
// 			found = 1;
// 			break;
// 		}
// 	}
// 	if (!found){
// 		printf("Not found\n");
// 	}
// }

// q.5 arrange item in ascending order
// int main(){
// 	char ch;
// 	int n,temp;
// 	printf("Enter value for n : ");	
// 	scanf("%d",&n);
// 	int arr[n];
// 	for (int i=0;i<n;i++){
// 		printf("Enter number %d : ",i+1 );
// 		scanf("%d",&arr[i]);
// 	}
// 	printf("a. ascending order\nd. descending order\nChoose any : ");
// 	scanf(" %c",&ch);
	
// 	for (int i=0;i<n;i++){
// 		for (int j=0;j<n-1;j++){
// 			if (arr[j]>arr[j+1]){
// 				// swap place
// 				temp = arr[j];
// 				arr[j] = arr[j+1];
// 				arr[j+1] = temp;				
// 			}
// 		}
// 	}
// 	if (ch=='a'){
// 		for (int i=0;i<n;i++){
// 			printf("%d ",arr[i]);
// 		}
// 	}
// 	else if (ch=='d'){
// 		for (n--;n>=0;n--){
// 			printf("%d ",arr[n] );
// 		}
// 	}
// 	else{
// 		printf("Invalid Choice\n");
// 	}
// 	printf("\n");
// 	return 0;
// }


// q.6 ask n nums and display only prime
// int main(){
// 	int n,count;
// 	printf("Enter value for n : ");	
// 	scanf("%d",&n);
// 	int arr[n];
// 	for (int i=0;i<n;i++){
// 		printf("Enter number %d : ",i+1 );
// 		scanf("%d",&arr[i]);
// 	}
// 	printf("Prime numbers:\n");
// 	for (int i=0;i<n;i++){
// 		count = 0;
// 		for (int j=1;j<=arr[i];j++){
// 			if (arr[i] % j  == 0 ){
// 				count++;
// 			}
// 		}
// 		if (count ==2){
// 			printf("%d ",arr[i]);
// 		}
// 	}
// 	printf("\n");
// 	return 0;

// }


// q.7 count salaries between 40k and 60K among n employee
// int main(){
// 	int n,count=0;
// 	printf("No of employees : ");
// 	scanf("%d",&n);
// 	int emp[n];
// 	for (int i=0;i<n;i++){
// 		printf("Salary for employee %d : ",i+1 );
// 		scanf("%d",&emp[i]);
// 		if (emp[i]>=40000 && emp[i]<=60000){
// 			count++;
// 		}
// 	}
// 	printf("No of employee with salary between 40K and 60K is %d\n",count );
// }



// q.8  matrix addition
// int main(){
// 	int row,col;
// 	printf("Enter row and col for matrix : ");
// 	scanf("%d %d",&row,&col);
// 	int mat1[row][col],mat2[row][col],mat3[row][col];
// 	printf("Enter values for mat1 : \n");

// 	for (int i=0;i<row;i++){
// 		for (int j=0;j<col;j++){
// 			printf("mat1[%d][%d] = ",i,j);
// 			scanf("%d",&mat1[i][j]);
// 		}
// 	}

// 	printf("Enter values for mat2 : \n");

// 	for (int i=0;i<row;i++){
// 		for (int j=0;j<col;j++){
// 			printf("mat2[%d][%d] = ",i,j);
// 			scanf("%d",&mat2[i][j]);
// 			mat3[i][j] = mat1[i][j] + mat2[i][j];
// 		}
// 	}
// 	printf("mat3  = \n");
// 	for (int i=0;i<row;i++){
// 		for (int j=0;j<col;j++){
// 			printf("%d\t",mat3[i][j]);
// 		}
// 		printf("\n");
// 	}
// }

// q.9 matrix multiplication
// int main(){
// 	int r1,c1,r2,c2,elem;
// 	printf("print dimention of mat1 : ");
// 	scanf("%d %d",&r1,&c1);
// 	printf("print dimention of mat2 : ");
// 	scanf("%d %d",&r2,&c2);

// 	if (c1!=r2){
// 		printf("matrix of order %d x %d and %d x %d cannot be multiplied\n",r1,c1,r2,c2 );
// 		exit(0);
// 	}
// 	int mat1[r1][c1],mat2[r2][c2],mat3[r1][c2];
// 	printf("Enter values for mat1 : \n");

// 	for (int i=0;i<r1;i++){
// 		for (int j=0;j<c1;j++){
// 			printf("mat1[%d][%d] = ",i,j);
// 			scanf("%d",&mat1[i][j]);
// 		}
// 	}

// 	printf("Enter values for mat2 : \n");

// 	for (int i=0;i<r2;i++){
// 		for (int j=0;j<c2;j++){
// 			printf("mat2[%d][%d] = ",i,j);
// 			scanf("%d",&mat2[i][j]);
// 			mat3[i][j] = mat1[i][j] + mat2[i][j];
// 		}
// 	}
// 	// mat multiplication starts here
// 	printf("mat3 = \n");
// 	for (int i=0;i<r1;i++){
// 		for (int j=0;j<c2;j++){
// 			mat3[i][j] = 0;
// 			for (int k=0;k<r2;k++){
// 				mat3[i][j] += mat1[i][k] * mat2[k][j];
// 			}
// 		}
// 	}
// 	for (int i=0;i<r1;i++){
// 		for (int j=0;j<c2;j++){
// 			printf("%d\t",mat3[i][j] );
// 		}
// 		printf("\n");
// 	}
// }

// q.10 transpose matrix
// int main(){
// 	int row=2,col=2,temp;
// 	int mat[row][col];
// 	for (int i=0;i<row;i++){
// 		for (int j=0;j<col;j++){
// 			printf("mat1[%d][%d] = ",i,j);
// 			scanf("%d",&mat[i][j]);
// 		}
// 	}
// 	printf("Before transpose\n");
// 	for (int i=0;i<row;i++){
// 		for (int j=0;j<col;j++){
// 			printf("%d\t",mat[i][j]);
// 		}
// 		printf("\n");
// 	}

	
// 	for (int i=0;i<row;i++){
// 		for (int j=0;j<col;j++){
// 			if (i>j){
// 				temp = mat[i][j];
// 				mat[i][j] = mat[j][i];
// 				mat[j][i] = temp;
// 			}
// 		}
// 	}
// 	printf("After transpose\n");
// 	for (int i=0;i<row;i++){
// 		for (int j=0;j<col;j++){
// 			printf("%d\t",mat[i][j]);
// 		}
// 		printf("\n");
// 	}
// }


// q.11 sum of diagonla element
int main(){
	int row=2,sum=0; // give me squre matrix
	int mat[row][row];
	printf("Enter values for mat: \n");
	for (int i=0;i<row;i++){
		for (int j=0;j<row;j++){
			printf("mat[%d][%d] = ",i,j);
			scanf("%d",&mat[i][j]);
			if  (i==j){
				sum += mat[i][j];
			}
		}
	}
	for (int i=0;i<row;i++){
		for (int j=0;j<row;j++){
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	printf("sum of diagonal is %d\n",sum );

}