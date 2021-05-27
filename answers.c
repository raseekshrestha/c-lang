#include <stdio.h>
#include <math.h>


// q.n.1 generate first 10 natural number with for loop
// int main(){
// 	for(int i=1 ; i<=10 ; i++){
// 		printf("%d\n",i );
// 	}
// 	return 0;
// }

// q.n.2 -> wap to print your name 10 times
// int main(){
// 	for(int i=1 ; i<=10 ; i++){
// 		printf("Raseek Shrestha\n");
// 	}
// 	return 0;
// }


//q.n.3 -> generate 10  natural number with while loop
// int main(){
// 	int i=1 ;
// 	while(i<=10){
// 		printf("%d\n",i );
// 		i++;
// 	}
// 	return 0;
// }


// q.n.4 --. generate 10 natural number wwith do-while loop
// int main(){
// 	int i=1 ;
// 	do{
// 		printf("%d\n",i );
// 		i++;
// 	}while(i<=10);
// 	return 0;
// }


// q.n.5 --> generate n odd terms
// int main(){
// 	for (int i=1;i<=10;i++){
// 		printf("%d ",i*2-1);
// 	}
// 	return 0;
// }


// q.n.6 -> generate first n even terms and find their sum
// int main(){
// 	int n, sum=0;
// 	printf("Enter value for n: ");
// 	scanf("%d",&n);
// 	for (int i=1;i<=n;i++){
// 		printf("%d ",i*2 );
// 		sum += i*2;
// 	}
// 	printf("\nSum is %d\n",sum);
// 	return 0;
// }



// q.n.7 -> sum of n natural number/
// int main(){
// 	int n,sum;
// 	printf("Enter value for n: ");
// 	scanf("%d",&n);
// 	sum = (n*(n+1)/2);
// 	printf("sum upto %d is %d\n",n,sum );
// 	return 0;
// }



// /q.n.8 -> sum of square of n natural numbers using all loops
// int main(){
// 	int n,sum=0;
// 	printf("Enter value for n: ");
// 	scanf("%d",&n);

// 	// using for looop
// 	// for (n;n>=1;n--){
// 	// 	sum += n*n;
// 	// }

// 	// using while loop
// 	// while (n>=1){
// 	// 	sum += n*n;
// 	// 	n--;
// 	// }

// 	// using while loop
// 	do{
// 		sum += n*n;
// 		n--;
// 	}while (n>=1);

// 	printf("sum is %d\n",sum );
// 	return 0;
// }


// q.n.9 -> sum of cube of first 10 natural numbers
// int main(){
// 	int sum=0;
// 	for (int i=1;i<=10;i++){
// 		sum += i*i*i;
// 	}
// 	printf("sum id %d\n",sum );
// 	return 0;
// }




// q.n.10 -> display the first 10 number of series  1,5,9,...... to 10th term
// int main(){
// 	for (int i=1;i<=10;i++){
// 		printf("%d ",i*4-3 );
// 	}
// 	printf("\n");
// 	return 0;
// }






// Q.no.11.  -> factorial of given number
// int main(){
// 	int n,fact=1;
// 	printf("enter n: ");
// 	scanf("%d",&n);
// 	for(n;n>=1;n--){
// 		fact = fact * n;
// 	}
// 	printf("fact is %d\n",fact );
// }


// Q.no 12  -> sum of digits of  given number
// int main(){
// 	int n,sum=0;
// 	printf("Enter vval of n: ");
// 	scanf("%d",&n);
// 	int temp = n;
// 	while(n>0){
// 		sum = sum + n  % 10;
// 		n =  n / 10;
// 	}
// 	printf("sum of digit of %d is %d\n",temp,sum );

// }




// QQ.no 13 -> find reverse of given number
// int main(){
// 	int n,rev=0;
// 	printf("Enter vval of n: ");
// 	scanf("%d",&n);
// 	while(n>0){
// 		rev = rev*10 + n  % 10;
// 		n =  n / 10;
// 	}
// 	printf("reverse of digit is %d\n",rev );

// }



// q.no 14 -> check whether the number is prime or not
// int main(){
// 	int n,counter=0;
// 	printf("Enter val of n: ");
// 	scanf("%d",&n);
// 	for (int i=1;i<=n;i++){
// 		if (n%i == 0 ){			
// 			counter++;
// 		}

// 	}
// 	if (counter == 2){
// 		printf("prime");
// 	}
// 	else{
// 		printf("not prime\n");
// 	}

// }



// q.no 15 -> print all prime numbers between 1 and 100
// int main(){
// 	int counter=0;
// 	for (int a=2;a<=100;a++){
// 		counter = 0;
// 		for (int i=1;i<=a;i++){

// 			if (a%i == 0 ){			
// 				counter++;
// 			}

// 		}
// 		if (counter == 2){
// 			printf("%d ",a);
// 		}
// 	}
// 	return 0;

// }




// q.no.16 ->count total number of prime numbers between 1 and n
// int main(){
// 	int counter=0,n,total=0;
// 	printf("Enter n : ");
// 	scanf("%d",&n);
// 	for (int a=2;a<=n;a++){
// 		counter = 0;
// 		for (int i=1;i<=a;i++){

// 			if (a%i == 0 ){			
// 				counter++;
// 			}

// 		}
// 		if (counter == 2){
// 			total++;
	
// 		}
// 	}
// 	printf("Total prime numbers between 1 and %d is %d\n",n,total );
// 	return 0;

// }




// q.no.17 -> wap to display first n term of fibonacci sequence
// int main(){
// 	int a=0,b=1,c,n;
// 	printf("enter nth term: ");
// 	scanf("%d",&n);
// 	for(n;n>=1;n--){
// 		printf("%d ",a );
// 		c = a + b;
// 		a = b;
// 		b = c;
// 	}
// 	return 0;

// }




// q.n.18  -> multiplicatiion table  upto n
// int main(){
// 	int n;
// 	printf("Enter value of n: ");
// 	scanf("%d",&n);
// 	for (int i=1;i<=n;i++){
// 		for(int j=1;j<=10;j++){
// 			printf("%d ",i*j);
// 		}
// 		printf("\n");
// 	}

// 	return 0;

// }




// q.n.19 --> print A B C D E F G H I J
// int main(){
// 	int ascii = 65;
// 	for (ascii;ascii<=74;ascii++){
// 		printf("%c ",ascii );
// 	}
// }


// q.n 20 display following pattern: 
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// int main(){
// 	for(int i=1;i<=5;i++){
// 		for (int j=1;j<=i;j++){
// 			printf("%d ",j );
// 		}
// 		printf("\n");
// 	}
// }




// q.n.21 -> display following pattern
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
// int main(){
// 	for(int i=5;i>=1;i--){
// 		for (int j=1;j<=i;j++){
// 			printf("%d ",j );
// 		}
// 		printf("\n");
// 	}
// }



// q.n.22 --> wap to generate multiplication table up to number  n entered bu user
// int main(){
// 	int n;
// 	printf("Multiplication table of n= ");
// 	scanf("%d",&n);
// 	for(int i=1;i<=10;i++){
// 		printf("%d x %d\t=\t%d\n",n,i,n*i );
// 	}
// }


// q.n.23 -> generate this output
// *****
//  ****
//   ***
//    **
//     *
// int main(){
// 	for (int i=5;i>=1;i--){
// 		for (int k=i;k<=4;k++){
// 			printf(" ");
// 		}
// 		for (int j = i; j >=1; j--){
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// }



// q.n.24 --. design chess board pattern
// int main(){
// 	//chess pattern
// 	char white='+',black='-',turn;
// 	int wh=219,bl=255,trn;

// 	for(int i=1;i<=8;i++){
// 		// START WITH WHITE IN THE ROW IF THE ROW NUMBER IS EVEN
// 		if (i%2 == 0){
// 			turn = white;
// 	      	trn = wh;
// 		}
// 		else{
// 			turn = black;
// 	     	trn=bl;
// 		}

// 		for(int j=1;j<=8;j++){
// 			printf(" %c ",turn );
// 			if (turn == black){
// 				turn = white;
// 			}
// 			else{
// 				turn = black;
// 			}
			

// 		}
// 		printf("\n");
// 	}
// }


// q.n.25 generate pyramid of number as:
//     1
//    121
//   12321
//  1234321
// 123454321
// int main(){
// 	for (int i=1;i<=5;i++){
// 		for (int k=4;k>=i;k--){
// 			printf(" ");
// 		}
// 		for (int j=1;j<=i;j++){
// 			printf("%d",j );
// 		}
// 		for (int j=i-1;j>=1;j--){
// 			printf("%d",j );
// 		}
// 		printf("\n");
// 		return 0;
// 	}
// }


// q.n.26 --> print the pattern
//    *
//   ***
//  *****
// *******
// int main(){
// 	for (int i= 1;i<=4;i++){
// 		for (int k=3;k>=i;k--){
// 			printf(" ");
// 		}
// 		for(int j=1;j<=i*2-1;j++){
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// }



// q.n.27 -> print this patttern
// 123454321
//  1234321
//   12321
//    121
//     1
// int main(){
// 	for(int i=5;i>=1;i--){
// 		for (int k=4;k>=i;k--){
// 			printf(" ");
// 		}

// 		for (int j=1;j<=i;j++){			
// 			printf("%d",j);
// 		}
// 		for (int j=i-1;j>=1;j--){			
// 			printf("%d",j);
// 		}

// 		printf("\n");
// 	}
// }




// q.n.28  --> find value  of given base to the give power
// int main(){
// 	int base,power;
// 	printf("Enter base and power separated by space: ");
// 	scanf("%d %d",&base,&power);
// 	printf("%d^%d = %.0f\n",base,power,pow(base,power) );
// 	return 0;
// }




//q.n.29(a) -> sum  of 1/1^1  + 1/3^2+... to nth term
// int main(){
// 	float sum=0;
// 	int base = 1;
// 	for(int i=1;i<=10;i++){
// 		base = i*2-1;
// 		sum += 1/(pow(base,2));
// 	}
// 	printf("sum is %.2f\n",sum );
// }


// q.n.29(b). sum of 11 + 22 + 33 ... to nth term
// int main(){
// 	int n,sum=0;
// 	printf("Enter value of  n: ");
// 	scanf("%d",&n);
// 	for (int i = 1 ; i <= n ; i++){
// 		printf("%d ",11*i );
// 		sum += 11*i;
// 	}
// 	printf("sum is %d\n",sum );
// }



// q.n.29(c) -> find sum  of 1^1 + 2^2 + 3^3 + ... to nth term
// int main(){
// 	int sum=0,n;
// 	printf("Enter nth term: ");
// 	scanf("%d",&n);
// 	for (int i=1;i<=n;i++){
// 		sum += pow(i,i);
// 	}
// 	printf("sum is %d\n",sum );
// }







