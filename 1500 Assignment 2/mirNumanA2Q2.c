//Numan Mir
//nmir@uoguelph.ca
//mirNumanA2Q2    

#include <stdio.h>

int main(){
    double population[10]; //array to hold 10 province's population
    double highestPop = 0.0; //to store highest population for output
    int provinceWithHighestPop = 0; //to store highest population province number for output
    double lowestPop = 0.0; //to store lowest population for output
    int provinceWithLowestPop = 0; //to store lowest population province number for output
    double totalPop = 0.0; //stores all populations, helps to calculate average population                  
    double avgPop = 0.0; 
    int i = 0;

    printf("Enter the population of 10 provinces in Canada (in millions):\n");
    for(i = 0; i < 10; ++i){ 
        printf("Province number %d: ", i+1); 
        scanf("%lf", &population[i]); //takes user input and stores it in location i (0-9) of the population array
        totalPop += population[i]; //adding to the total population variable to help calculate the average population
    }
    avgPop = totalPop/10; //calculating average population
    highestPop = population[0]; //setting to the value at 0 of the population array, in order to determine actual value in the following for loop
    lowestPop = population[0]; //setting to the value at 0 of the population array

    for(i = 0; i < 10; ++i){
        if(population[i] >= highestPop){ //if the population at location i is larger than highestPop
            highestPop = population[i]; //the population at location i is the new highest population
            provinceWithHighestPop = i + 1; //takes note of the province number for the output
        }
        if(population[i] <= lowestPop){ //if the population at location i is less than lowestPop
            lowestPop = population[i]; //the population at location i is the new lowest population
            provinceWithLowestPop = i + 1; //takes note of the province number for the output
        }
    } 
    //prints out average population, province number of highest population, highest population,
    //province number of lowest population, and lowest population
    printf("**************************************************\n");
    printf("Average population in Canada = %.2lf million\n", avgPop);
    printf("Province number %d has the highest population\n", provinceWithHighestPop);
    printf("Highest population = %.2lf million\n", highestPop);
    printf("Province number %d has the lowest population\n", provinceWithLowestPop);
    printf("Lowest population = %.2lf million\n", lowestPop);
    printf("**************************************************\n");

    return 0;
}

