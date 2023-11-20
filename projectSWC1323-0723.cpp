/*
    File Name       : projectSWC1323-0723.cpp
    Matrics Number  : AM2307013895
                      AM2307013945
                      AM2307013898
                      AM2307013896
    Section         : TWO (2)
    Lecturer        : Robaya Binti Jantan
    Course Code     : CC101
    Subject         : SWC1323 - Fundamental of Programming
    Program Desc.   : To keep track and manage the student records of Starlight
                      High School.
*/

//prepared by MUHAMMAD HAKIM BIN MUSYAMRIL (AM2307013895)
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

//calculateAverageScores function
double calculateAverageScores(int numStudents) {
    double sum = 0.0;

    for (int i = 0; i < numStudents; ++i) {
        sum += scores[i];
    }

    return (numStudents > 0) ? (sum / numStudents) : 0.0;
}

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

//main function
int main() {
    int numStudents;

    //input the number of students
    cout << "Enter the number of students: ";
    cin >> numStudents;

    //make sure the number of students did not exceed the limit given
    if (numStudents <= 0 || numStudents > MAX_STUDENTS) {
        cerr << "Invalid number of students. Program exiting.\n";
        return 1;
    }

    //input of student data
    inputStudentData(numStudents);

    //calculate average scores
    double average = calculateAverageScores(numStudents);

    //display student record
    displayStudentRecords(numStudents, average);

    return 0;
}