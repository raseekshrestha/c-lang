#include <stdio.h>
#include <math.h>
// q.n.1 fiindd sum  of ssquare of first n  natural numbr usein all loops
// int main(){
// 	int n,sum=0;
// 	printf("Enter value for n: ");
// 	scanf("%d",&n);

// 	// using for loop
// 	// printf("using for loop\n");
// 	// for (n;n>=1;n--){
// 	// 	sum += n*n;
// 	// }
	

// 	// using while loop
// 	// printf("Using while loop\n");
// 	// while (n>=1){
// 	// 	sum += n*n;
// 	// 	n--;
// 	// }

// 	// using do while
// 	printf("Using Do .. while loop\n");
// 	do{
// 		sum += n*n;
// 		n--;
// 	}while(n>=1);
// 	printf("sum is %d\n",sum);
// }

// q.n.2 find the factorial of the given numbers
// int main(){
// 	int n,fact=1;
// 	printf("Enter value of n for n! : ");
// 	scanf("%d",&n);
// 	for (n;n>=1;n--){
// 		fact *= n;
// 	}
// 	printf("factorial is %d\n",fact  );
// }

// q.n.3 find reverse of given numbers
// int main(){
// 	int n,rev = 0;
// 	printf("Enter the number: ");
// 	scanf("%d",&n);
// 	while (n>0){
// 		rev = rev * 10 + n%10;
// 		n /= 10;
// 	}
// 	printf("reverse is %d\n",rev );

// }


// q.n.4 get no of digit in a given number
// int main(){
// 	int n,counter=0;
// 	printf("Enter the number : ");
// 	scanf("%d",&n);
// 	while (n>0){
// 		counter++;
// 		n/=10;
// 	}
// 	printf("lendth of given number is %d\n",counter );
// }

// q.n.5 check for prime number
// int main(){
// 	int counter;
// 	for (int n=2;n<=100;n++){
// 		counter = 0;
// 		for (int i=2;i<n;i++){
// 			if (n%i == 0){
// 				counter++;
// 				break;
// 			}
// 		}
// 		if (counter==0){
// 			printf("%d ",n);
// 		}

// 	}
// 	printf("\n");
// 	return 0;
	
// }


// q.n.7 find lcm and hcf
// int hcf(int a,int b){
// 	int sm,factor=1;
// 	if (a<b){
// 		sm=a;
// 	}
// 	else{
// 		sm=b;
// 	}
// 	// hcf of two number lies between 1 and smallest number
// 	for (int i=1;i<=sm;i++){
// 		// printf("%d %% %d == %d && %d %% %d == %d \n",a,i,a%i,b,i,b%i);
// 		if ((a%i==0) && (b%i==0)){
// 			factor = i;

// 		}
// 	}
// 	return factor;
// }

// int lcm(int a,int b){
// 	int max = a * b; // lcm lies between 1 and a*b
// 	for (int i=1;i<=max;i++){
// 		if (i%a==0 && i%b==0){
// 			return i;
// 		}
// 	}
// }

// int main(){
// 	int a,b;
// 	printf("enter val for a and b : ");
// 	scanf("%d %d",&a,&b);
// 	printf("lcm is %d\n",lcm(a,b));
// 	printf("hcf is %d\n",hcf(a,b) );
// }



// q.n.8  display first nth term off fibonacci
// int main(){
// 	int a=1,b=1,c,n;
// 	printf("Enter value of n : ");
// 	scanf("%d",&n);
// 	for (n;n>=1;n--){
// 		printf("%d ",a );
// 		c = a + b;
// 		a = b;
// 		b = c;
// 	}

// 	printf("\n");
// 	return 0;
// }


// q.n.9 check palindrome
// int main(){
// 	int n,rev=0;
// 	printf("Enter value for n : ");
// 	scanf("%d",&n);
// 	int temp  =  n;
// 	while (n>0){
// 		rev = rev*10 + n%10;
// 		n/=10;
// 	}
// 	if (rev == temp){
// 		printf("palindrome\n");
// 	}
// 	else{
// 		printf("not palindrome\n");
// 	}

// }



// q.n.9 check armstrong
// int main(){
// 	int n,sum=0;
// 	printf("Enter value for n : ");
// 	scanf("%d",&n);
// 	int temp  =  n;
// 	while (n>0){
// 		sum += pow(n%10,3);
// 		n/=10;
// 	}
// 	if (sum == temp){
// 		printf("armstrong\n");
// 	}
// 	else{
// 		printf("not armstrong\n");
// 	}
// 	return 0;

// }




// q.n.11  prtterns
// 1
// 12
// 123
// 1234
// 12345

// int main(){
// 	for (int i=1;i<=5;i++){
// 		for (int j=1;j<=i;j++){
// 			printf("%d",j );
// 		}
// 		printf("\n");
// 	}
// }


// A
// AB
// ABC
// ABCD
// ABCDE
// int main(){
// 	for (int i=65;i<=69;i++){
// 		for (int j=65;j<=i;j++){
// 			printf("%c",j );
// 		}
// 		printf("\n");
// 	}
// }


// 12345
// 1234
// 123
// 12
// 1
// int main(){
// 	for (int i=5;i>=1;i--){
// 		for (int j = 1; j <= i ; j++){
// 			printf("%d",j );
// 		}
// 		printf("\n");
// 	}
// }


// ABCDE
// ABCD
// ABC
// AB
// A
// int main(){
// 	for (int i=69;i>=65;i--){
// 		for (int j = 65; j <= i ; j++){
// 			printf("%c",j );
// 		}
// 		printf("\n");
// 	}
// }


//     1
//    232
//   34543
//  4567654
// 567898765
// int main(){
// 	int j;
// 	for (int i=1;i<=5;i++){
// 		for (int  k=4;k>=i;k--){
// 			printf(" ");
// 		}
// 		for (j=i;j<=2*i-1;j++){
// 			printf("%d",j );
// 		}
// 		for (int j1=j-2;j1>=i;j1--){
// 			printf("%d",j1 );
// 		}
// 		printf("\n" );
// 	}
// }


//     A
//    BCB
//   CDEDC
//  DEFGFED
// EFGHIHGFE
// int main(){
// 	int j,ch;
// 	for (int i=1;i<=5;i++){
// 		ch =64+i;
// 		for (int k=4;k>=i;k--){
// 			printf(" ");
// 		}
// 		for (j=i;j<=2*i-1;j++){
// 			printf("%c",ch);
// 			ch++;
// 		}
// 		ch-=2;
// 		for (int j1=j-2;j1>=i;j1--){
// 			printf("%c",ch );
// 			ch--;
// 		}
// 		printf("\n" );

// 	}
// }
