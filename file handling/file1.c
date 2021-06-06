#include <stdio.h>

int main(){
	FILE *f;
	f= fopen("data.txt","a");
	int totalStud=5;
	char name[30];
	float c,bee,mth,ct,total;
	char clzName[50] = "Samriddhi";
	fprintf(f,"\t\t\t\t\t\t\t%s\n",clzName );
	fprintf(f, "%s\t%s\t%s\t%s\t%s\t%s\n","name","c","bee","mth","ct","total" );
	for(int i=0;i<totalStud;i++){
		total = 0;
		printf("Name of Student: ");
		scanf("%s",name);
		printf("Mark in C: ");
		scanf("%f",&c);
		printf("Mark in BEE: ");
		scanf("%f",&bee);
		printf("Mark in MTH: ");
		scanf("%f",&mth);
		printf("Mark in CT: ");
		scanf("%f",&ct);
		total = c + bee + mth + ct;
		fprintf(f, "%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",name,c,bee,mth,ct,total );
		printf("\n");
	}

	return 0;
}