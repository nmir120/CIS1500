//Numan Mir
//nmir@uoguelph.ca
//mirNumanA2Q1
#include <stdio.h>

int main(){
  
    int numLines = 0;
    int numWidth = 0;
    int i = 0;
    int j = 0;
  
    printf("How many lines do you want to print? (must be an even number!)\n"); 
    scanf("%d", &numLines); //stores user input into numberLines for number of lines the figure will have
    if((numLines %2) != 0){ //if the number isn't even, the program ends
        printf("Invalid input - number of lines must be even\n");
    }
    else{ //if the number is even, the program continues
        printf("How many spaces do you want between the left and right figures?\n");
        scanf("%d", &numWidth); //stores user input into numWidth for spaces in between the figures
    
        for(i = 0; i <= (numLines/2); ++i){ //top half of the figure
            for(j = 0; j < ((numLines/2) - i); ++j){ //for each line, print a space as long as j is less than numlines/2 - i
                printf(" ");
            }
            for(j = 0; j < i; ++j){ //for each line, print i stars, after the spaces
                printf("*");
            }
            for(j = 0; j < numWidth; ++j){ //for each line, print numWidth spaces or underscores
                if(i != (numLines/2)){ //if the line number isnt numLines/2, print numWidth spaces
                    printf(" ");
                }
                else{ //if the line number IS numLines/2, print numWidth underscores
                    printf("_");
                }
            }
            for(j = 0; j < i; ++j){ //for each line, print i stars, after the spaces/underscores
                printf("*");
            }
            printf("\n"); //print a new line each time after the nested loops are run through
        } //end of top half for loop
    
        for(i = (numLines/2); i < numLines; ++i){ //bottom half of the figure (every line after half numLines)
            for(j = 0; j < (i - (numLines/2)); ++j){ //for each line, print a space as long as j is less than i - numLines/2
                printf(" ");
            }
            for(j = 0; j < (numLines - i); ++j){ //for each line, print (numLines - i) amount of stars
                printf("*");
            }
            for(j = 0; j < numWidth; ++j){ //for each line, print numWidth spaces or underscores
                if(i != (numLines/2)){ //if the line number isnt numLines/2, print numWidth spaces
                    printf(" ");
                }
                else{ //if the line number IS numLines/2, print numWidth underscores
                    printf("_");
                }
            }
            for(j = 0; j < (numLines - i); ++j){ //for each line, print (numLines - i) amount of stars
                printf("*");
            }
            printf("\n"); //print a new line each time after the nested loops are run through
        } //end of bottom half for loop
  } //end of the else statement
  return 0;
}
