#include <stdio.h>
#include <stdlib.h>

int main() {

    char word[] = "apple";
    int usr;

    printf("1.Play\n2.Quit\nInput: ");
    scanf("%d", &usr);

    if(usr==1) {
        
        int count = 0;
        char wordGuess[5];
    
        while(!wordGuess[5] == word[5]) {
            
            printf("an _ a day, keeps a doctor away.\n[Guess the Word]: ");
            scanf("%s", &wordGuess);

            count++;

            if(count>2) {
                break;
            }
        }

        if (count<2) {
            printf("You won!\n");
        } else {
            printf("You lost\n"); 
        }
        
   
    } else {
        printf("Bye!\n");
        abort;
    } 

    return 0;          
}