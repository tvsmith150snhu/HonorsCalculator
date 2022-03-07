/*
Troy Smith
IT-312-J4007
2022.03.13
2-1 Using Operators to Calculate GPA and Honors
*/

/*
The Honors Calculator

This program will prompte the user for the letter grades of 4 courses
and calculated the average, then determine the honors category 
of summa cum laude, magna cum laude, cum laude or no honors at all 
from that avereage

Only grade letters of "A,B,C,D or F" in UPPERCASE will be accepted.
If another input is detected, the program will prompt again and not progress
until the proper syntax is entered.
*/

#include<iostream>

using namespace std;

int main() {

    //DEFINE variables needed
    double total = 0;
    double avg = 0;
    char inputGrade;
    int counter = 1;

    //LOOP until 4 valid grades are input
    while (counter <= 4) {
        cout << "Enter grade " << counter << " (A/B/C/D/F): ";

        //GET grade
        cin >> inputGrade;

        //Variable conditioning
        if (inputGrade == 'A') {
            total += 4.0;
            counter++;
        }
        else if (inputGrade == 'B') {
            total += 3.0;
            counter++;
        }
        else if (inputGrade == 'C') {
            total += 2.0;
            counter++;
        }
        else if (inputGrade == 'D') {
            total += 1.0;
            counter++;
        }
        else if (inputGrade == 'F') {
            total += 0.0;
            counter++;
        }
    }

    //FIND the average
    avg = total / 4.0;

    //DISPLAY the avg
    cout << "Average: " << avg << endl;

    //FIND the honor level and DISPLAY it
    cout << "Graduating summa cum laude is ";

        if (avg >= 3.9) {
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
        }

    cout << "Graduating magna cum laude is ";
        if (avg >= 3.8 && avg <= 3.89) {

            cout << "true" << endl;

        }
        else {
            cout << "false" << endl;
    }

    cout << "Graduating cum laude is ";
        if (avg >= 3.65 && avg <= 3.79) {
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
        }

    cout << "Graduating without honors is ";

        if (avg < 3.65) {
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
        }

}