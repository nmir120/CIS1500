//Numan Mir
//nmir@uoguelph.ca
//mirNumanA2Q4

//I tried combining the two for loops and if statements but it wouldn't work properly for cases like 'a1' where a letter is first, but this method works fine

#include <stdio.h>
#include <string.h>

int main(){
    char userString[99999] = "";
    int goodness = 0;
    int i = 0;
    int stringSize = 0;

    printf("Enter a string with no spaces: ");
    scanf("%s", userString);
    stringSize = strlen(userString);

    for(i = 0; i < stringSize; ++i){ //first for loop going through entire string to score goodness 
        if(userString[i] == '1'){ //adding one to goodness for every '1' in the sentence
            ++goodness;
        }
    }
    
    for(i = 0; i < stringSize; ++i){ //second for loop going through entire string to score goodness
        if(userString[i] != '1' && userString[i] != '0'){ //setting goodness to 0 if string has any char other than 0 or 1
            goodness = 0;
        }
    }

    printf("Goodness of the input string is %d\n", goodness);

    return 0;
}
