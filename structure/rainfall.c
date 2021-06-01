#include <stdio.h>
#include <string.h>

int rainfalls = 10; // total no of rainfall

struct rainfall{
	float rain;
};
float counter(struct rainfall r[]);

int main(){
    struct rainfall r[rainfalls];
    for (int i=0;i<rainfalls;i++){
        printf("\nrainfall in mm :");
        scanf("%f",&r[i].rain);
    }
    float avg = counter(r);
    printf("average rainfall of %d days is %.2f mm\n",rainfalls,avg );
	
	return 0;
}

float counter(struct rainfall r[]){
	float sum  =  0;
	
	for (int i=0;i<rainfalls;i++){
		sum = sum + r[i].rain;
	}
	return sum/rainfalls;
}
