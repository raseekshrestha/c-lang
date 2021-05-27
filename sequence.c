#include <stdio.h>

// print -> 1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111

int main(){
	int max = 10;
	for (int i=1 ; i<=10; i++){
		for (int j=1; j<=i;j++){
			printf("1");
		}
		if (i != max){
			printf(", ");
		}
	}
	printf("\n");
	return 0;
}


// -------------
// Alternate way
// -------------

// #include <stdio.h>
// #include <math.h>

// int main(){
//     int p=0,prev=0;
//     int max=10;
//     for (int i=0;i<max;i++){
//         p = prev + pow(10,i);
//         prev = p;
//         if (i+1 == max){
//             printf("%d ",p);
//         }
//         else{
//             printf("%d, ",p);
//         }
        
//     }
//     return 0;
// }
