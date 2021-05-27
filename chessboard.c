#include <stdio.h>

// alternate
// int main(){
// 	for (int i = 0; i < 8; i++){
// 		if (i%2==0){
// 			printf("%c",255);			
// 		}
// 		for(int j=1;j<=4;j++){
// 			printf("%c%c",219,255);
// 		}
// 		printf("\n");

// 	}
// 	return 0;

// }








int main(){
 //chess pattern
 char white='+',black=' ',turn;
 int wh=219,bl=255,trn;
 
 for(int i=1;i<=8;i++){
 	for (int k=1;k<=4;k++){
     // START WITH WHITE IN THE ROW IF THE ROW NUMBER IS EVEN
     if (i%2 == 1){
         turn = white;
         trn = wh;
     }
     else{
         turn = black;
         trn=bl;
     }
 	
	for(int j=1;j<=8;j++){
	     printf("%c%c%c%c%c%c%c%c",turn,turn,turn,turn,turn,turn,turn,turn );
	     // printf("%c%c",trn,trn );
	     if (turn == black){
	         turn = white;
	         trn = wh;
	     }
	     else{
	         turn = black;
	         trn = bl;
	    }           
 
     }

     printf("\n");


 	}
    // printf("\n");
 }
}