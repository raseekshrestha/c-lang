#include <stdio.h>
#include <string.h>

// q.1 wap to convert stirng to upper case without using function
// int main(){
// 	char string[10] = "test24/7.c";
// 	printf("original : %s\n",string );
// 	for (int i=0;i<10;i++){
// 		if (string[i]>=97 && string[i]<=122){
// 			string[i] -= 32;
// 		}

// 	}
// 	printf("capitalized: %s\n",string);

// }

// q.2 reverse stirng withouy using function
// int main(){
// 	char string[10] = "lang",reverse[10];
// 	for (int i=0;i<strlen(string);i++){
// 		reverse[i] = string[strlen(string)-i-1];
// 		if (i == strlen(string)-1){
// 			reverse[i+1] = '\0';
// 		}
// 	}
// 	printf("original : %s\n",string );
// 	printf("reversed : %s\n",reverse );
// }

// q.3 copy string without function
// int main(){
// 	char string[10] = "root",cpy[10];
// 	for (int i=0;i<strlen(string);i++){
// 		cpy[i]  = string[i];
// 		if (i== strlen(string)-1){
// 			cpy[i+1] = '\0';
// 		}
// 	}
// 	printf("original : %s\n",string );
// 	printf("copy: %s\n",cpy );
// }

// q.4 concatinate without using function
// int main(){
// 	char str1[50] = "Hello ",str2[50]="World!! from C lang";
// 	int len = strlen(str1),i=0;

// 	while (1){
// 		str1[len++] = str2[i++];
// 		if (i==strlen(str2)){
// 			str1[len] = '\0';
// 			break;
// 		}
// 	}
// 	printf("concatinated string : %s\n", str1);
// }


// check palindrome
// int main(){
// 	char string[10] = "contrib",reverse[10];
// 	for (int i=0;i<strlen(string);i++){
// 		reverse[i] = string[strlen(string)-i-1];
// 		if (i == strlen(string)-1){
// 			reverse[i+1] = '\0';
// 		}
// 	}
// 	printf("word : %s\n",string );
// 	if (strcmp(string,reverse)==0){
// 		printf("palindrome\n");
// 	}
// 	else{
// 		printf("not palindrome\n");
// 	}
// }


// q.6 read text and cound vowel consonanat,digit whitespace ,other chars,etc
// int main(){
// 	char text[100];
// 	int vowel=0,consonant=0,digit=0,whitespace=0,other=0;
// 	printf("Enter Text: ");
// 	gets(text);
// 	for (int i=0;i<strlen(text);i++){
// 		(text[i] >=65 && text[i]<=90) ? text[i]+=32:0;
// 		if (text[i] >=97 && text[i]<=122){
// 			if (text[i]=='a' || text[i]=='e' || text[i]=='i' || text[i]=='o' || text[i]=='u' ){
// 				vowel++;
// 			}
// 			else{
// 				consonant++;
// 			}
// 		}
// 		else if(text[i]>=48 && text[i]<=57){
// 			digit++;
// 		}
// 		else if (text[i]==11 ||text[i]==13 || text[i]==32){
// 			whitespace++;
// 		}
// 		else{
// 			other++;
// 		}
// 	}
// 	printf("vowels : %d\n",vowel );
// 	printf("consonant : %d\n",consonant );
// 	printf("digit : %d\n",digit );
// 	printf("whitespace : %d\n",whitespace );
// 	printf("others : %d\n",other );
// }


// q.7  delete "that" from  txt
// int main(){
// 	// printf("rev of asdf is %s\n",strrev("asdf") );
// 	char text[100] = "this is just a text";
// 	printf("Text : %s\n",text );
// 	char split[100][20],searchFor[20]="this";
// 	int m=0,n=0;
// 	for (int i=0;i<strlen(text);i++){
// 		if (text[i] == 32){
// 			split[m++][n] = '\0';
// 			n=0;
// 		}
// 		else{
// 			// printf("else\n");
// 			split[m][n++] = text[i];
// 		}
// 	}
// 	split[m++][n] = '\0';
// 	printf("Removing '%s':\n",searchFor );
// 	for (int i=0;i<m;i++){
// 		if (strcmp(searchFor,split[i])!=0){
// 			printf("%s ",split[i]);
// 		}
// 	}
// 	printf("\n");
// }


// q.8 search  substring
// int main(){
// 	char text[100] = "Trafalgar D. Water Law";
// 	char sub[20] = "doflaming";
// 	// char text[100] = "this is just a random string";
// 	// char sub[20] = "just a";
// 	printf("text\t\t: %s\n",text);
// 	printf("substring\t: %s\n",sub);
// 	int j=0,found=0;
// 	for (int i=0;i<strlen(text);i++){
// 		if (text[i]==sub[j]){
// 			j++;
// 			if (j==strlen(sub)){
// 				found=1;
// 				printf("\nsubstring Found !!!\n\n");
// 				break;
// 			}
// 		}
// 		else{
// 			j=0;
// 		}
// 	}
// 	if (!found){
// 		printf("\nNot found\n\n");
// 	}
// 	printf("Removing all space from text:\n");
// 	for (int i=0;i<strlen(text);i++){
// 		if (text[i]!=32){
// 			printf("%c",text[i] );
// 		}
// 	}
// 	printf("\n");
// }


// q.9 count no of words
// int main(){
// 	char text[100] = "just another random string 123";
// 	int word=0;
// 	(text[0]!=32) ? word++:0;
// 	for (int i=0;i<strlen(text);i++){		
// 		word = (text[i] == 32 && text[i+1]!=32)? ++word:word;
// 	}
// 	printf("%s\n",text);
// 	printf("Word Coount: %d\n",word );
// }


// q.10 read n students and display in
// int main(){
// 	int n;
// 	printf("print value for n : ");
// 	scanf("%d",&n);
// 	char name[n][20];
// 	for (int i=0;i<n;i++){
// 		printf("Name %d:",i+1);
// 		scanf("%s",name[i]);
// 		// printf("%s\n",name);
// 	}
// 	printf("given names are : \n");
// 	for (int i=0;i<n;i++){
// 		printf("%s\n",name[i] );
// 	}
// }

// q.11 sort alphabetaical
// int main(){
// 	// printf("%d",strcmp("a","b"));
// 	int n;
// 	printf("print value for n : ");
// 	scanf("%d",&n);
// 	char name[n][20];
// 	for (int i=0;i<n;i++){
// 		printf("Name %d: ",i+1);
// 		scanf("%s",name[i]);
// 		// printf("%s\n",name);
// 	}
// 	char temp[20];
// 	printf("arranged alphabetaical : \n");
// 	for (int i=0;i<n;i++){
// 		for (int j=i+1;j<n;j++){
// 			if (strcmp(name[i],name[j])>0){
// 				strcpy(temp,name[i]);
// 				strcpy(name[i],name[j]);
// 				strcpy(name[j],temp);
// 			}
// 		}		
// 	}
// 	for (int i=0;i<n;i++){
// 		printf("%s\n",name[i] );
// 	}
// }


// q.12 sort array of string alphabetaical
int main(){
	int n=6;
	char name[6][10] = {"aman", "akesh", "anish", "anam", "anil", "anju"};
	printf("arranged alphabetaical : \n");
	char temp[10];

	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (strcmp(name[i],name[j])>0){
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}		
	}
	for (int i=0;i<n;i++){
		printf("%s\n",name[i] );
	}
}

