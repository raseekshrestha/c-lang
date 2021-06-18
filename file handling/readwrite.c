#include <stdio.h>

struct book{
	int id;
	char bookname[20];
	char author[20];
}b;

int main(){
	// FILE *fp;
	// fp = fopen("bookdetails.txt","w");
	// for (int i=0;i<3;i++){
	// 	printf("book id : ");
	// 	scanf("%d",&b.id);

	// 	printf("book name : ");
	// 	scanf("%s",b.bookname);

	// 	printf("book author : ");
	// 	scanf("%s",b.author);

	// 	fprintf(fp, "%d\t%s\t%s\n",b.id,b.bookname,b.author );
	// }
	// fclose(fp);
	// printf("All records added to bookdetails.txt\n");

	FILE *fp1;
	fp1 = fopen("bookdetails.txt","r");
	printf("Data from file\n");
	printf("........................\n");
	printf("id\tbook\tauthor\n");
	printf("..\t....\t......\n");
	for (int i=0;i<3;i++){
		fscanf(fp1,"%d %s %s",&b.id,b.bookname,b.author);
		printf("%d\t%s\t%s\n", b.id,b.bookname,b.author);
	}
	fclose(fp1);
}