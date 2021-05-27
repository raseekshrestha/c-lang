#include <stdio.h>


void fibonacci(int n,int a,int b){
	if (n!=0){
		printf("%d ",a);
		int c = a + b;
		a = b;
		b = c;
		fibonacci(n-1,a,b);

	}

}

int main(){
	fibonacci(10,0,1);
	return 0;
}