#include <stdio.h>
#include <string.h>

int size = 2;

struct cars{
	char model[15];
	char name[30];
	int seat;
	int door;
	float power;
};

int main(){
	struct cars car[size];
	FILE *f;
	char model[15];
	char name[30];
	f = fopen("car.txt","a");
	for (int i=0;i<=size;i++){
		// printf("Enter modal,engine power,no of seats,doors and name : ");
		printf("Enter Model and name of car: ");
		scanf("%s %s",model,name);
		strcpy(car[i].model,model);
		strcpy(car[i].name,name);
		printf("Enter engine power: ");
		scanf("%f",&car[i].power);
		printf("Enter no of seats and no of doors : ");
		scanf("%d %d",&car[i].seat,&car[i].door);

		// scanf("%s %f %d %d %s",model,&power,&seat,&door,name );
		fprintf(f, "%s, %.2f , %d, %d, %s\n",car[i].model,car[i].power,car[i].seat,car[i].door,car[i].name);
	}
	printf("all entries saved\n");
	fclose(f);
	return 0;
}