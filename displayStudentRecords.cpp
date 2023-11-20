/*
    File Name       : displayStudentRecords.cpp
    Matrics Number  : AM2307013895
                      AM2307013945
                      AM2307013898
                      AM2307013896
    Section         : TWO (2)
    Lecturer        : Robaya Binti Jantan
    Course Code     : CC101
    Subject         : SWC1323 - Fundamental of Programming
    Program Desc.   : Sub program two to the main program 
                      (inputStudentData function)
*/

//prepared by MUHAMMAD AIMAN IDHAM BIN SHAHARUDIN (AM2307013945)
#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 50;

//declare the arrays
int studentID[MAX_STUDENTS];
string studentName[MAX_STUDENTS];
double scores[MAX_STUDENTS];
int attendance[MAX_STUDENTS];

//displayStudentRecords function
void displayStudentRecords(int numStudents, double average) {
    cout << "\nStudent Records:\n";
    cout << "----------------------------------------------\n";
    cout << "ID\tName\t\tScores\tAttendance\n";
    cout << "----------------------------------------------\n";

    for (int i = 0; i < numStudents; ++i) {
        cout << studentID[i] << "\t" << studentName[i] << "\t\t" << scores[i] << "\t" << attendance[i] << "%\n";
    }

    cout << "----------------------------------------------\n";
    cout << "Average Scores: " << average << "\n";
}