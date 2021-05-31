#include <stdio.h>
#include <string.h>

struct employee{
	char name[30];
	char gender[1];
	int age;
}emp[10];

int main(){
    char name[30];
    
    for (int i=0;i<10;i++){
        printf("Name of employee %d :",i+1);
        scanf("%s",name);
        strcpy(emp[i].name,name);
        
        printf("gender of employee %d (m/f):",i+1);
        scanf("%s",emp[i].gender);
        
        printf("age of employee %d :",i+1);
        scanf("%d",&emp[i].age);
        
        printf("Name: %s\n",emp[i].name);
        printf("gender: %s\n",emp[i].gender);
        printf("Name: %d\n\n",emp[i].age);
    }
	
	return 0;
}
