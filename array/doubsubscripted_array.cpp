//double-subscripted array example

#include <iostream>
#include <iomanip>

const int students = 3;  //number of students
const int exams = 4;   //number of exams

//function prototypes
int minimum( int[][exams], int, int);
int maximum(int[][exams], int, int);
double average(int[], int);
void printArray(int [][exams], int, int);

int main(){
        //initilise student grades for three students (rows)
        int studentGrades[students][exams] =
        {{77,68,86,74},
         {96,87,89,78},
         {70,90,86,81}};

        //output array studentGrades
        std::cout << "The array is:\n";
        printArray( studentGrades, students, exams);

        //determine smallet and largest grade Values
        std::cout << "\n\nLowest grade: "
                  << minimum(studentGrades, students, exams)
                  << "\nHighest grade: "
                  << maximum(studentGrades, students, exams) << '\n';

        std::cout << std::fixed << std::setprecision(2);

        //calculate average grade for each students
        for (int person = 0; person < students; person++) {
                std::cout << "The average grade for student " << person
                          << " is "
                          << average(studentGrades[person], exams) << '\n';
        }

        return 0;
}

//find minimum grades
int minimum( int grades[][exams], int pupils, int tests){
        int lowGrade = 100; //initilise to highest possible grades

        for(int i=0; i < pupils; i++) {
                for (int j = 0; j < tests; j++) {
                        if (grades[i][j] < lowGrade) {
                                lowGrade = grades[i][j];
                        }
                }
        }
        return lowGrade;
} //end function minimum

//find maximum grades
int maximum( int grades[][exams], int pupils, int tests){
        int highGrade = 0; //initializes lowest grade possible

        for (int i = 0; i < pupils; i++) {
                for(int j = 0; j < tests; j++) {
                        if (grades[i][j] > highGrade) {
                                highGrade = grades[i][j];
                        }
                }
        }

        return highGrade;
} //end function maximum

//determine average grade for particular students
double average(int setOfGrades[], int tests){
        int total = 0;

        //total all grades for one students
        for (int i = 0; i < tests; i++) {
                total += setOfGrades[i];
        }

        return static_cast <double> (total) / tests;
        //static_cast convert int to double
        //average
}

//print the array
void printArray( int grades[][exams], int pupils, int tests){
        //set left justificatrion and output columns heads
        std::cout << std::left << "                 [0]  [1]  [2] [3]";

        //output grades in tabular format
        for (int i = 0; i < pupils; i++) {
                //output label for rows
                std::cout << "\nstudentGrades[" << i <<"] ";

                for (int j = 0; j < tests; j++) {
                        std::cout << std::setw(5) << grades[i][j];
                }
        }
} //end function printArray
