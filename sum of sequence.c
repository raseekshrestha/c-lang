#include <stdio.h>

// (2*3)/5 - (4*5)/7 + (6*7)/9 - .... to nth term
// find the sum as well

int main(){
	int n;
	printf("enter  value of n: ");
	scanf("%d",&n);
	float x,y,z,term,sum=0,sign=1;
	for(int i=1;i<=n;i++){
		x = i*2;
		y= i*2 +1;
		z=i*2+3;
		term = sign * ((x*y)/z);
		printf("The %dth term is (%.0f * %.0f)/%.0f \t= %.2f\n",i,x,y,z,term );
		sum  = sum + term;
		sign = sign * -1;
	}

	printf("And the sum is %.4f\n",sum );
	return 0;

}