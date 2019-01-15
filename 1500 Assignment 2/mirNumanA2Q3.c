//Numan Mir
//nmir@uoguelph.ca
//mirNumanA2Q3

//please read:
//average word length is calculated by dividing total alphabetical characters by total words, words include digits such as '123' or 'h3ll0'
//'the answer is 12' counts 4 words 
//talked with a TA and he told me this is the correct way to do it

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
  
    char sentence[50] = "";
    int vowelCount = 0;
    int consonantCount = 0;
    int alphaCount = 0;
    int wordCount = 0;
    double avgWordLength = 0.0;
    int i = 0;
    int j = 0;
    char vowels[10] = "";
    //assigning all vowels into vowels array to do a for loop check 
    vowels[0] = 'a'; 
    vowels[1] = 'e';
    vowels[2] = 'i';
    vowels[3] = 'o';
    vowels[4] = 'u';
    vowels[5] = 'A';
    vowels[6] = 'E';
    vowels[7] = 'I';
    vowels[8] = 'O';
    vowels[9] = 'U';
  
    printf("Enter a sentence: ");
    fgets(sentence, 50, stdin);
  
    for(i = 0; i < 50; ++i){
        if(isalpha(sentence[i])){ //counting number of alphabetic characters to help calculate avgWordLength and consonantCount
            ++alphaCount;
        }
        if(isalnum(sentence[i]) && isspace(sentence[i+1])){ //this adds 1 to wordCount if the character here is a number/letter and the next character is a space, indicating the end of a word
            ++wordCount;
        }
	if(isalnum(sentence[i]) && ispunct(sentence[i+1]) && isspace(sentence[i+2])){ //this adds 1 to wordCount for special cases like "hey!", where the word ends in a punctuation mark
            ++wordCount;
        }
        for(j = 0; j < 10; ++j){ //for every character in the sentence array, it compares each character stored in the vowels array
            if(sentence[i] == vowels[j]){ //if match is found, add one to vowelCount
                ++vowelCount;
            }
        }
    }
    consonantCount = alphaCount - vowelCount; //total vowels subtracted from total alphabetic characters to find number of consonants
    avgWordLength = (double)alphaCount / wordCount; //average word length calculated by dividing total number of characters divided by number of words 

    printf("Number of vowels in the sentence = %d\n", vowelCount);
    printf("Number of consonants in the sentence = %d\n", consonantCount);
    printf("Average word length: %.1lf\n", avgWordLength);
  
    return 0;
}
