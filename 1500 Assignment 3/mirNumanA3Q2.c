//Numan Mir
//nmir@uoguelph.ca
//mirNumanA3Q2
//Twitterlyzer

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_TWEET_LENGTH 60 //global constant (not variable!)

//function protoypes
int isValidTweet(char []);
int isTweetAReply(char []);
void shorterTweet(char [], char [], char []);
int numTweetsRequired(char []);

//insert main here

int isValidTweet(char tweet[]){ //takes string and checks if it is in between 1 and 60 characters, returns 1 if true, 0 if false
    int result = 0;
    
    if(strlen(tweet) >=1 && strlen(tweet) <= MAX_TWEET_LENGTH){
        result = 1;
    }
    
    return result;
}

int isTweetAReply(char tweet[]){ //takes string and checks if it is a reply or not, returns 1 if it is, 0 if not
    int result = 0;
    
    if(tweet[0] == '@' && isalnum(tweet[1])){ //if the first character is an @ symbol followed by an alphabetic character or number, the string is a reply
        result = 1;
    }
    
    return result;
}

void shorterTweet(char firstTweet[], char secondTweet[], char result[]){ //checks which tweet is shorter, stores result in result array
    
    if(strlen(firstTweet) == strlen(secondTweet)){
        strcpy(result, "Same length"); //if they are the same length, "Same length" stored in result
    }
    else if(strlen(firstTweet) < strlen(secondTweet)){
        strcpy(result, "Tweet 1"); //if first tweet is shorter, "Tweet 1" stored in result
    }
    else{
        strcpy(result, "Tweet 2"); //if second tweet is shorter, "Tweet 2" stored in result
    }
    
    return;
}

int numTweetsRequired(char tweet[]){ //takes string, returns how many tweets are required to store the tweet
    int numTweets = 0;
    
    numTweets = strlen(tweet)/MAX_TWEET_LENGTH; //divides the length of the string by 60 to get number of tweets needed
    if((strlen(tweet) % MAX_TWEET_LENGTH) != 0){
        ++numTweets; //adds one more to number of tweets if there is a remainder
    }
    
    return numTweets;
}
