//Numan Mir
//Lab 9
#include <stdio.h>
#define SIZEH 30
#include <string.h>

void giveMeEven(char first[SIZEH], char second[SIZEH], int* lenSecond);

int main(){
  //test case 1: second string is empty
  char str1[SIZEH] = "Dumbledore";
  char str2[SIZEH] = "";
  int str2Length = 0;
  printf("Test case 1: second string is already empty\n");
  giveMeEven(str1, str2, &str2Length);
  printf("First string: %s\nNew second string: %s\nLength of second string: %d\n\n", str1, str2, str2Length);
  
  //test case 2: second string was not empty
  printf("Test case 2: second string was not empty\n");
  strcpy(str2, "Hi my name is Bob");
  printf("Second string: %s\n", str2);
  giveMeEven(str1, str2, &str2Length);
  printf("First string: %s\nNew second string: %s\nLength of second string: %d\n", str1, str2, str2Length);
  return 0;
  
}

void giveMeEven(char first[SIZEH], char second[SIZEH], int* lenSecond){
  int i = 0;
  int j = 0;
  if(strlen(second) != 0){
    strcpy(second, ""); //make second string empty if it isn't already
  }
  for(i = 0; i < strlen(first); i += 2){ //goes through even indices of first string
    second[j] = first[i]; //stores even characters from first string into second string
    ++j;
  }
  second[j] = '\0'; //adds the null character to end of second string
  *lenSecond = strlen(second);
  return;
}
