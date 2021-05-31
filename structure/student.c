#include <stdio.h>
#include <string.h>

int arrSize = 3; // total no of students

struct student{
	char name[30];
	float mark;
};
void averageCounter(float marks[]);

int main(){
    char name[30];
    float marks[10];
    struct student std[arrSize];
    
    for (int i=0;i<arrSize;i++){
        printf("\nName of student%d : ",i+1);
        scanf("%s",name);
        strcpy(std[i].name,name);
        
        printf("%s's mark : ",std[i].name);
        scanf("%f",&std[i].mark);

        marks[i] = std[i].mark;
    }
    averageCounter(marks);
	
	return 0;
}

void averageCounter(float marks[]){
	float sum  =  0;
	int lessCount=0,moreCount=0;
	for (int i=0;i<arrSize;i++){
		sum += marks[i];
	}
	float avg = sum/arrSize;
	for (int i=0;i<arrSize;i++){
		if (marks[i]<=avg){
			lessCount += 1;
		}
		else{
			moreCount += 1;
		}
	}
	printf("%d student got more than average(%.2f)\n%d student got less than average(%.2f) ",moreCount,avg,lessCount,avg );
}