#include <stdio.h>
#include <math.h>
#include <stdlib.h>


// q.n.1 input three number and find the largest
// int main(){
// 	int a,b,c,largest;

// 	printf("Enter three numbers : ");
// 	scanf("%d %d %d",&a,&b,&c);
// 	if (a>b && b>c){
// 		largest = a;
// 	}
// 	else if(b>a && b>c){
// 		largest = b;
// 	}
// 	else{
// 		largest = c;
// 	}

// 	printf("%d is the largest one\n",largest );
// 	return 0;
// }


// q.n.2 check for leap year
// int main(){
// 	int year,leap=0;
// 	printf("Enter year : ");
// 	scanf("%d",&year);
// 	if (year%400 == 0){
// 		leap =1;
// 	}
// 	else if (year % 100 != 0 && year % 4 == 0){
// 		leap = 1;
// 	}
// 	if (leap){
// 		printf("%d is leap year \n",year);
// 	}
// 	else{
// 		printf("%d is not leap year\n",year);
// 	}
// }


// q.n.3 find roots of quadratic equatioon
// int main(){
// 	float a,b,c,root1,root2,disc,isImag=0,realPart,imagPart;
// 	printf("Enter the value of a,b,c in equation ax^2 + bx + c : " );
// 	scanf("%f %f %f",&a,&b,&c);

// 	disc = b*b - 4*a*c;
// 	if (disc > 0){
// 		root1 = (-1 * b + sqrt(disc))/2*a;
// 		root2 = (-1 * b - sqrt(disc))/2*a;
// 	}
// 	else if (disc == 0){
// 		root1 = root2 = (-1 * b)/2*a;
// 	}
// 	else{
// 		isImag = 1;
// 		realPart = (-1 * b)/2*a;
// 		imagPart = sqrt(fabs(disc))/2*a;
// 	}

// 	printf("The roots are : \n");
// 	if (isImag){
// 		printf("root1 = %.2f + i%.2f\n",realPart,imagPart );
// 		printf("root2 = %.2f - i%.2f\n",realPart,imagPart );
// 	}
// 	else{
// 		printf("root1 = %.2f\nroot2 = %.2f\n",root1,root2 );
// 	}
// }

// q.n.4 read mark obtaied in all subjests and find total marks, percentage ressult division
// int main(){
// 	float c,phy,iit,math,dl,total=0,percentage,pm=40,fm=100;
// 	char div[2];
// 	printf("Mark in C : ");
// 	scanf("%f",&c);
// 	printf("Mark in dl : ");
// 	scanf("%f",&dl);
// 	printf("Mark in math : ");
// 	scanf("%f",&math);
// 	printf("Mark in phy : ");
// 	scanf("%f",&phy);
// 	printf("Mark in iit : ");
// 	scanf("%f",&iit);
// 	total = dl + phy + iit + math + c;
// 	percentage = total/(fm*5)*100;
// 	if (c<=pm || dl <pm || math <pm || phy < pm || iit<pm){
// 		printf("Result : fail\n");
// 	}
// 	else{
// 		printf("Result : pass\n");
// 	}
// 	if (percentage>=90){
// 		printf("Division: A+\n");
// 	}
// 	else if(percentage>=80){
// 		printf("Division: A\n");
// 	}
// 	else if (percentage>=70){
// 		printf("Division: B+\n");
// 	}
// 	else if (percentage>=60){
// 		printf("Division: B\n");
// 	}
// 	else{
// 		printf("Division: C\n");
// 	}

// 	printf("total mark obtained : %.2f\n",total);
// 	printf("percentage is %.2f%%\n",percentage);
// }


// q.n.5 check if the enterred character is alphabet or not
// int main(){
// 	char ch;
// 	printf("Enter a char : ");
// 	scanf("%c",&ch);
// 	if (ch>='a' && ch<='z' || ch >='A' && ch<= 'Z' ){
// 		printf("its alphabet\n");
// 	}
// 	else{
// 		printf("its not alphabet\n");
// 	}

// }




// q.n.6 check if the character is vowel or not
// int main(){
// 	char ch;
// 	printf("Enter a character : ");
// 	scanf("%c",&ch);
// 	if (ch=='a' || ch == 'e' || ch == 'i' || ch== 'o' || ch=='u'){
// 		printf("its vowel\n");
// 	}
// 	else{
// 		printf("its not vowel\n");
// 	}
// }


// q.n7 wap to convert  days to year month and daya
// int main(){
// 	int days,year,month;
// 	printf("enter days : ");
// 	scanf("%d",&days);
// 	printf("%d days = ",days );
// 	year = days/365;
// 	days -= year*365;
// 	month = days / 30;
// 	days -= month*30;
// 	printf("%d year, %d month, %d days\n",year,month,days);
// }

// q.n.8 get age and show remark
// int main(){
// 	int age;
// 	printf("Enter age : ");
// 	scanf("%d",&age);
// 	if (age<12){
// 		printf("child\n");
// 	}
// 	else if (age>=12 && age<20){
// 		printf("teen\n");
// 	}
// 	else if (age>=20 && age<30){
// 		printf("adult\n");
// 	}
// 	else if (age>=30 && age<55){
// 		printf("young\n");
// 	}
// 	else if (age>=55){
// 		printf("old\n");
// 	}
// }


// q.n.9 write a menu base program for
// int main(){
// 	float length,breadth;
// 	int usrChoice;
// 	printf("Enter length and breadth of rectangle: ");
// 	scanf("%f %f",&length,&breadth);
// 	while (1){
// 		printf("1. Area of rectangle\n2. Perimeter of rectangle\n3. Exit\nEnter your Choice : ");
// 		scanf("%d",&usrChoice);
// 		switch(usrChoice){
// 			case 1:
// 				printf("Area is %.2f sq.meter\n",length*breadth);
// 				break;
// 			case 2:
// 				printf("Perimeter is %.2f meter\n",2*(length+breadth) );
// 				break;
// 			case 3:
// 				printf("quitting...\n");
// 				exit(0);
// 			default:
// 				printf("------------------------------\n");
// 				printf("| Invalid choice.. Try again |\n");
// 				printf("------------------------------\n");
// 				continue;
// 		}
// 		break;
// 	}
// }



// q.n.10 perform calculatioon based on the choiice
// int main(){
// 	int a,b,res;

// 	char operation;
// 	printf("Enter two number and operation(+,-,*,/):\n(Example input : 7 5 +) :  ");
// 	scanf("%d %d %c",&a,&b,&operation);

// 	switch (operation){
// 		case '+':
// 			printf("%d + %d = %d\n",a,b,a+b);
// 			break;

// 		case '-':
// 			printf("%d - %d = %d\n",a,b,a-b);
// 			break;

// 		case '*':
// 			printf("%d * %d = %d\n",a,b,a*b);
// 			break;

// 		case '/':
// 			printf("%d / %d = %.2f\n",a,b,(float)a/b);
// 			break;
// 		default:
// 			printf("----------------------\n");
// 			printf("| Invalid opetaion.. |\n");
// 			printf("----------------------\n");
// 	}
// }

