/*
    File Name       : inputStudentData.cpp
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

//inputStudentData function
void inputStudentData(int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student #" << i + 1 << endl;

        //input student ID
        cout << "Student ID: ";
        cin >> studentID[i];

        //input student name
        cout << "Student Name: ";
        cin.ignore();  //to clear the newline character left in the buffer
        getline(cin, studentName[i]);

        //input scores
        cout << "Scores: ";
        cin >> scores[i];

        //input attendance
        cout << "Attendance (%): ";
        cin >> attendance[i];
    }
}