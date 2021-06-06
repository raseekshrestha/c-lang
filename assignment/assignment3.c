#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// q.2 sort list alphabet order
// int main(){
// 	int n;
// 	printf("Number of employees: ");
// 	scanf("%d",&n);
// 	char names[n][30],temp[30];


// 	for (int i=0;i<n;i++){
// 		printf("Name%d : ",i+1 );
// 		scanf("%s",names[i]);
// 	}

// 	for (int i=0;i<n;i++){
// 		for (int j=0;j<n-1;j++){
// 			if (strcmp(names[j],names[j+1]) > 0 ){
// 				strcpy(temp,names[j]);
// 				strcpy(names[j],names[j+1]);
// 				strcpy(names[j+1],temp);
// 			}
// 		}
// 	}
// 	printf("Sorted list \n");
// 	for (int i=0;i<n;i++){
// 		printf("%s\n",names[i] );
// 	}
    
// }





// q.n 6 find sum of both diagonal sum of 1,2 row transpose and ....
// int main(){
// 	int n,sum=0,row1=0,row2=0,sum2=0;
// 	printf("enter value of 'n' for n*n matrix : ");
// 	scanf("%d",&n);
// 	int mat[n][n];

// 	for (int i=0;i<n;i++){
// 		for (int j=0;j<n;j++){
// 			printf("value for row%d,col%d : ",i+1,j+1 );
// 			scanf("%d",&mat[i][j]);
// 			if (i==j){
// 				sum += mat[i][j];
// 			}
// 			if (i==0){
// 				row1 += mat[i][j];
// 			}
// 			if (i==1){
// 				row2 += mat[i][j];
// 			}
// 			if((i+j) == n-1){
// 				sum2 += mat[i][j];
// 			}
// 		}
// 	}
// 	printf("matrix is\n");
// 	for (int i=0;i<n;i++){
// 		for (int j=0;j<n;j++){
// 			printf("%d\t",mat[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	printf("sum of diagonal left to right is %d \n",sum );
// 	printf("sum of diagonal right to left is %d \n",sum2 );
// 	printf("sum of first row is %d \n",row1 );
// 	printf("sum of second row is %d \n",row2 );

// 	printf("converting to upper triangle\n");
// 	for (int i=0;i<n;i++){
// 		for (int j=0;j<n;j++){
// 			// printf("value for row%d,col%d\n",i+1,j+1 );
// 			if (j<i){
// 				mat[i][j] = 0;
// 			}
// 		}
// 	}
// 	for (int i=0;i<n;i++){
// 		for (int j=0;j<n;j++){
// 			// printf("value for row%d,col%d\n",i+1,j+1 );
// 			printf("%d\t",mat[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	printf("Transpose\n");
// 	int temp;
// 	for (int i=0;i<n;i++){
// 		for (int j=0;j<n;j++){
// 			// works only for square matrix
// 			if (j>i){
// 				mat[i][j] = mat[i][j] + mat[j][i];
// 				mat[j][i] = mat[i][j] - mat[j][i];
// 				mat[i][j] = mat[i][j] - mat[j][i];
// 			}
			
// 		}
// 	}
// 	for (int i=0;i<n;i++){
// 		for (int j=0;j<n;j++){
// 			printf("%d\t",mat[i][j]);
// 		}
// 		printf("\n");
// 	}
// }






// q.7 sum and product of two matrix
// int main(){
// 	int m,n;
// 	printf("Enter value of 'm' and 'n' for m*n matrix: ");
// 	scanf("%d %d",&m,&n);
// 	int mat1[m][n],mat2[m][n],mat3[m][n];
// 	printf("values for mat1: \n");
// 	for (int i=0;i<m;i++){
// 		for (int j=0;j<n;j++){
// 			printf("Value for mat1[%d][%d] : ",i+1,j+1 );
// 			scanf("%d",&mat1[i][j]);
// 		}
// 	}
// 	printf("\nvalues for mat2: \n");
// 	for (int i=0;i<m;i++){
// 		for (int j=0;j<n;j++){
// 			printf("Value for mat2[%d][%d] : ",i+1,j+1 );
// 			scanf("%d",&mat2[i][j]);
// 			mat3[i][j] = mat1[i][j] + mat2[i][j];
// 		}
// 	}
// 	printf("mat1 + mat2 = \n");
// 	for (int i=0;i<m;i++){
// 		for (int j=0;j<n;j++){
// 			printf("%d\t",mat3[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	// matrix multiplication
// 	if (m!=n){
// 		printf("matrix of order %d*%d and %d*%d cannot be multiplied\n",m,n,m,n );
// 		exit(0);
// 	}
// 	for (int i=0;i<m;i++){
// 		for (int j=0;j<n;j++){
// 			mat3[i][j]=0;
// 			for (int k=0;k<m;k++){
// 				mat3[i][j] += mat1[i][k]*mat2[k][j];
// 			}

// 		}
// 	}
// 	printf("mat1 * mat2 = \n");
// 	for (int i=0;i<m;i++){
// 		for (int j=0;j<n;j++){
// 			printf("%d\t",mat3[i][j]);
// 		}
// 		printf("\n");
// 	}

// }





// q no 8 read n element of matrix and sort them in ascending and descending orrder
// int main(){
// 	int n;
// 	printf("Enter value for n : ");
// 	scanf("%d",&n);
// 	int arr[n];
// 	for (int i=0;i<n;i++){
// 		printf("element %d : ",i+1 );
// 		scanf("%d",&arr[i]);
// 	}
// 	//ascending order
// 	for (int i=0;i<n;i++){
// 		for (int j=0;j<n-1;j++){
// 			if (arr[j] > arr[j+1]){
// 				arr[j] = arr[j] + arr[j+1];
// 				arr[j+1] = arr[j] - arr[j+1];
// 				arr[j] = arr[j] - arr[j+1];
// 			}

// 		}
		
// 	}
// 	printf("ascending order\n");
// 	for (int i=0;i<n;i++){
// 		printf("%d\t",arr[i] );
// 	}
// 	printf("\ndescending order\n");
// 	for (n--;n>=0;n--){
// 		printf("%d\t",arr[n]);
// 	}

// }






// q.n 9 search suppliied number inn one dimennsiioonal and two diimensional matrix
// int main(){
// 	int a1=10,b1=5,b2=2;
// 	int mat1[10] = {1,7,6,2,5,9,8,3,4,10};
// 	int mat2[5][2] = {1,7,6,2,5,9,8,3,4,10};

// 	int n,found=0,found2=0;
// 	printf("Search any number: ");
// 	scanf("%d",&n);
// 	printf("\nseaarching in 1D array...\n");
// 	for (int i=0;i<10;i++){
// 		if (n==mat1[i]){
// 			printf("Found at mat1[%d] \n",i);
// 			found = 1;
// 		}
// 	}
// 	if (!found){
// 		printf("Not Found\n");
// 	}
// 	printf("\nsearching in 2D array...\n");
// 	for (int i=0;i<5;i++){
// 		for (int j=0;j<2;j++){
// 			if(n==mat2[i][j]){
// 				printf("Fount at mat2[%d][%d]\n",i,j );
// 				found2=1;
// 			}
// 		}
// 	}
// 	if (!found2){
// 		printf("Not found\n");
// 	}
// }





// q.10 sum of element of matrix
// int main(){
// 	int n,sum=0;
// 	printf("Enter value for n: ");
// 	scanf("%d",&n);
// 	int arr[n];
// 	for (int i=0;i<n;i++){
// 		printf("Element %d :",i+1 );
// 		scanf("%d",&arr[i]);
// 		sum += arr[i];
// 	}
// 	printf("Sum is %d\n",sum );

// }





 // q.11 ask for num check if it is present in array
// int main(){
// 	int arr[3][3]={
// 		{ 6, 37, 33},
// 		{ 12, 11, 13},
// 		{ 14, 85, 96}
// 	},n,found=0;
// 	printf("Search any number : ");
// 	scanf("%d",&n);
// 	for (int i=0;i<3;i++){
// 		for (int j=0;j<3;j++){
// 			if (n==arr[i][j]){
// 				printf("Found at arr[%d][%d]",i,j);
// 				found=1;
// 			}
// 		}
// 	}
// 	if (!found){
// 		printf("not found\n");
// 	}
// }





// q.n.13 wap to read n elem array and find sum  of smallest andd largest element of matrix
// int main(){
// 	int n,smallest,largest;
// 	printf("enter value of n :");
// 	scanf("%d",&n);
// 	int arr[n];
// 	for (int i=0;i<n;i++){
// 		printf("Element %d : ",i+1);
// 		scanf("%d",&arr[i]);
// 	}
// 	largest = arr[0];
// 	smallest  = arr[0];
// 	for (int i=1;i<n;i++){
// 		if (largest < arr[i]){
// 			largest = arr[i];
// 		}
// 		if (smallest > arr[i]){
// 			smallest = arr[i];
// 		}
// 	}
// 	printf("sum of largest and smallest number = %d\n",largest+smallest );
// 	// printf("largest is %d\n",largest );
// 	// printf("smallest is %d\n", smallest);

// }




// q.14 read m*n matrix and find smalllest elemennt
// int main(){
// 	int m,n,smallest;
// 	printf("Enter 'm' & 'n' for m*n matrix : ");
// 	scanf("%d %d",&m,&n);
// 	int arr[m][n];

// 	for (int i=0;i<m;i++){
// 		for (int j=0;j<n;j++){
// 			printf("value for arr[%d][%d] : ",i,j);
// 			scanf("%d",&arr[i][j]);			
// 		}
// 	}
// 	smallest  =  arr[0][0];
// 	for (int i=0;i<m;i++){
// 		for (int j=0;j<n;j++){
// 			if (smallest > arr[i][j]){
// 				smallest = arr[i][j];
// 			}	
// 		}
// 	}
// 	printf("smallest number is %d\n",smallest );
// }




// q.15.   WAP to read string and count specified character on it.
// int main(){
// 	char string[1000];
// 	printf("enter any string : ");
// 	scanf("%s",string);
// 	printf("Char Count : %d\n",strlen(string) );
// }




// 16. checkk for palindrome string
// int main(){
// 	char string[100],s[1],rev[100]="";
// 	printf("Enter string : ");
// 	scanf("%s",string);

// 	for (int i=0;i<strlen(string);i++){
// 		rev[strlen(string)-i-1] = string[i];
// 	}
// 	printf("reversed string is : %s\n",rev );
// 	if (strcmp(string,rev)==0){
// 		printf("palindrome string\n");
// 	}
// 	else{
// 		printf("Not palindrome string\n");
// 	}
// }





// q.17 display vowels in string
// int main(){
// 	char string[100],s;
// 	printf("Enter string : ");
// 	scanf("%s",string);
// 	for (int i=0;i<strlen(string);i++){
// 		s = string[i];
// 		if (s=='a' || s=='e' || s=='i' || s=='o' || s=='u'){
// 			printf("%c",s);
// 		}
// 	}
// }




// q.18 count vowels and consonant
// int main(){
// 	char string[100],s;
// 	int vowels=0,consonant=0;
// 	printf("Enter string : ");
// 	scanf("%s",string);
// 	for (int i=0;i<strlen(string);i++){
// 		s = string[i];
// 		if (s=='a' || s=='e' || s=='i' || s=='o' || s=='u'){
// 			vowels += 1;
// 		}
// 		else{
// 			consonant += 1;
// 		}
// 	}
// 	printf("vowels count : %d \n",vowels );
// 	printf("consonant count : %d \n",consonant );
// }




// q.19 insert given char at given index of  given string




// q.20 chaange uppercase alphabet to lowercase and vice versa
// int main(){
// 	char string[100],s;
// 	printf("Enter string : ");
// 	scanf("%s",string);
// 	for (int i=0;i<strlen(string);i++){
// 		s = string[i];
// 		if (s >=65 && s <=90){
// 			s += 32;
// 		}
// 		else if (s>=97 && s<=122){
// 			s -= 32;
// 		}
// 		printf("%c",s );
// 	}
// }
	




