//Numan Mir
//nmir@uoguelph.ca
//mirNumanA2Q5
#include <stdio.h>

int main(){
    int multTable[10][10]; //2d array to hold 1-9 multiplication table values
    int i = 0;
    int j = 0;
    int userNum = 0;
    char userChar = 'y'; //char variable to continue program
  
    for(i = 1; i <= 9; ++i){ //assigning each spot in the array with multiplication table values
        for(j = 1; j <= 9; ++j){
            multTable[i][j] = i*j; //multiplying i by j to get table value at [i][j]
        }
    }
    do{ //do while loop to go through program once, then repeat if the userChar is 'y'
        printf("Enter zero (0) to see all multiplication tables from 1-9 OR\n");
        printf("Enter a specific number between 1 and 9 to see its multiplication table\n\n");
        printf("Enter a choice: ");
        scanf("%d", &userNum); //stores user input into userNum
  
        if(userNum < 0 || userNum > 9){ //if user input is out of boundaries, program ends
            printf("Invalid input.\n");
            break; //breaks out of do while loop, goodbye message also printed
        }
    
        else if(userNum >= 1 && userNum <= 9){ //if user input between 1 and 9, prints multiplication table for the specific number
            printf("\nPrinting multiplication table for %d:\n", userNum);
            printf("-----------------------------------\n");
            for(i = 1; i <= 9; ++i){ //prints the userNum x values 1 to 9, with the corresponding location of the array
                printf("%d x %d = %d\n", userNum, i, multTable[userNum][i]);
            }
            printf("\nDo you wish to continue? Enter y for yes, any other character for no: ");
            scanf(" %c", &userChar); //stores user input into userChar, to be checked at the end of the do while loop
            printf("\n");
        }
        else{ //if user input is zero
            printf("\n                        Printing Multiplication Tables 1 - 9\n");
            for(i = 0; i < 80; ++i){ //print 80 stars
                printf("*");
            }
            printf("\n");
            printf("\tOne\tTwo\tThree\tFour\tFive\tSix\tSeven\tEight\tNine\n"); //tabs used to correct alignment
            printf("One"); 
            for(i = 1; i <= 9; ++i){
                printf("\t%d", multTable[1][i]); //prints all values stored in the first row separated by a tab
            }
            printf("\nTwo"); 
            for(i = 1; i <= 9; ++i){
                printf("\t%d", multTable[2][i]); //prints all values stored in the second row separated by a tab
            }
            printf("\nThree"); 
            for(i = 1; i <= 9; ++i){
                printf("\t%d", multTable[3][i]); //prints all values stored in the third row separated by a tab
            }
            printf("\nFour"); 
            for(i = 1; i <= 9; ++i){
                printf("\t%d", multTable[4][i]); //prints all values stored in the fourth row separated by a tab
            }
            printf("\nFive"); 
            for(i = 1; i <= 9; ++i){
                printf("\t%d", multTable[5][i]); //prints all values stored in the fifth row separated by a tab
            }
            printf("\nSix"); 
            for(i = 1; i <= 9; ++i){
                printf("\t%d", multTable[6][i]); //prints all values stored in the sixth row separated by a tab
            }
            printf("\nSeven"); 
            for(i = 1; i <= 9; ++i){
                printf("\t%d", multTable[7][i]); //prints all values stored in the seventh row separated by a tab
            }
            printf("\nEight"); 
            for(i = 1; i <= 9; ++i){
                printf("\t%d", multTable[8][i]); //prints all values stored in the eighth row separated by a tab
            }
            printf("\nNine"); 
            for(i = 1; i <= 9; ++i){
                printf("\t%d", multTable[9][i]); //prints all values stored in the ninth row separated by a tab
            }
            printf("\n");
            for(i = 0; i < 80; ++i){ //print 80 stars
                printf("*");
            }
            printf("\n\nDo you wish to continue? Enter y for yes, any other character for no: ");
            scanf(" %c", &userChar); //stores user input into userChar, to be checked at the end of the do while loop
            printf("\n");
        }
    }while (userChar == 'y'); //if userChar is 'y', program repeats at the beginning of the do while loop

    printf("Goodbye.\n"); //if userChar is not 'y', or userNum is invalid, goodbye message is printed
    
    return 0;
}
