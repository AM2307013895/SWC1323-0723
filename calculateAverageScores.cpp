/*
    File Name       : calculateAverageScores.cpp
    Matrics Number  : AM2307013895
                      AM2307013945
                      AM2307013898
                      AM2307013896
    Section         : TWO (2)
    Lecturer        : Robaya Binti Jantan
    Course Code     : CC101
    Subject         : SWC1323 - Fundamental of Programming
    Program Desc.   : Sub program one to the main program 
                      (inputStudentData function)
*/

#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 50;

//declare the arrays
int studentID[MAX_STUDENTS];
string studentName[MAX_STUDENTS];
double scores[MAX_STUDENTS];
int attendance[MAX_STUDENTS];

//calculateAverageScores function
double calculateAverageScores(int numStudents) {
    double sum = 0.0;

    for (int i = 0; i < numStudents; ++i) {
        sum += scores[i];
    }

    return (numStudents > 0) ? (sum / numStudents) : 0.0;
}