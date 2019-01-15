//Numan Mir
//nmir@uoguelph.ca
//mirNumanA3Q1
//Grade Calculator

#include <stdio.h>

//function prototypes
float percentage(float, float); 
float contribution(float, float, float);
float assignmentContribution(float, float, float);
float dailyPracticeContribution(float [11]);
float labContribution(float [9], float, float);
float totalTermMark(float, float, float);
float finalMarkRequired(float, float);

//insert main here

float percentage (float actualMark, float maxMark){ //takes actual mark and max mark to return percentage
    return (actualMark/maxMark) * 100.0;
}

float contribution(float actualMark, float maxMark, float weight){ //takes actual mark, max mark, and weight of work to return raw contribution of mark
    return (actualMark/maxMark) * weight;
}

float assignmentContribution(float mark1, float mark2, float mark3){ //takes marks of assignment 1, 2, and 3 to return total contribution of all 3 assignments
    float assn1Contribution = 0.0;
    float assn2Contribution = 0.0;
    float assn3Contribution = 0.0;
    assn1Contribution = (mark1/50.0) * 5.0; //calculating each contribution separately
    assn2Contribution = (mark2/60.0) * 10.0;
    assn3Contribution = (mark3/60.0) * 10.0;
    
    return assn1Contribution + assn2Contribution + assn3Contribution;
}

float dailyPracticeContribution(float markArray[11]){ //takes an array of 11 zybooks marks, removes lowest mark, returns total contribution of all zybooks
    float lowestMark = 0.0;
    float marksSum = 0.0;
    int i = 0;
    
    lowestMark = markArray[0];
    for(i = 0; i < 11; ++i){ 
        if(markArray[i] < lowestMark){ //finds lowest mark in array
            lowestMark = markArray[i];
        }
        marksSum += markArray[i]; //adds all marks to a total
    }
    marksSum -= lowestMark; //removes lowest mark from total marks
    
    return marksSum/10.0;
}

float labContribution(float labMarks[9], float labExam1Mark, float labExam2Mark){ //takes all lab marks (weekly assignments in an array, and lab exam 1 and 2), returns contribution of all lab work
    float labsPercent = 0.0;
    float labExam1Percent = 0.0;
    float labExam2Percent = 0.0;
    int i = 0;
    
    for(i = 0; i < 9; ++i){
        labsPercent += (labMarks[i]/9.0) * 10.0; //calculates contribution of labs
    }
    labExam1Percent = (labExam1Mark/50.0) * 10.0; //calculates contribution of exam 1 and 2 separately
    labExam2Percent = (labExam2Mark/50.0) * 10.0;
    
    return labsPercent + labExam1Percent + labExam2Percent;
}

float totalTermMark(float assnMarks, float dailyPracticeMarks, float labMarks){ //returns sum of assn marks, lab marks, and daily practice marks
    float totalMarks = 0.0;
    
    totalMarks = assnMarks + dailyPracticeMarks + labMarks;
    if(assnMarks == 25.0 && dailyPracticeMarks == 10.0 && labMarks == 30.0){
      totalMarks += 5.0; //if student has perfect in all 3, add 5 bonus marks
    }
    
    return totalMarks;
}

float finalMarkRequired(float totTermMark, float desiredMark){ //takes total term mark and student's desired mark, returns percentage needed on final exam to achieve desired mark
    return ((desiredMark - totTermMark)/35.0) * 100.0;
}
