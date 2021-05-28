#include <stdio.h>

int main(){
    char white='+',black=' ',turn;
    int size = 8; // width of each square horizontally
    // i-loop for 8 rows
    for (int i=1;i<=8;i++){
        // start with white if row no is odd
        if (i%2==0){
            turn = black;
        }else{
            turn = white;
        }
        // k-loop for height each box in chess or thickness of column
        for (int k =1;k<=size/2;k++){
            // j-loop for 8 column
            for (int j=1;j<=8;j++){
                //l for length of seach square             
                for (int l=1;l<=size;l++){
                    printf("%c",turn );
                }
                // alternate white and black
                if (turn==white){
                    turn = black;
                }else{
                    turn = white;
                }                
            }
            printf("\n");
        }        
    }
    return 0;
}