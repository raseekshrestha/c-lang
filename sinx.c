#include <stdio.h>
#include <math.h>


int main(){
	int n,x,power,powerFact,sign=1;
	printf("Enter value of x in sin(x): ");
	scanf("%d",&x);
	printf("Value of n: ");
	scanf("%d",&n);

	float term,sum=0;
	float resl;


	for (int i=1; i<=n;i++){
		power = i*2-1;
		powerFact = 1;
		for(int j=1;j<=power;j++){
			powerFact = powerFact * j;

		}
		printf("Factorial of %d is %d\n",power,powerFact );
		resl = (float)pow(x,power);
		term = sign * (resl/powerFact);
		printf("Term is (%d^%d)/%d \t=  %.2f\n",x,power,powerFact,term );
		sign = sign * -1;
		sum = sum + term;

	}
	printf("sum  is %.4f\n",sum );

	return 0;

}