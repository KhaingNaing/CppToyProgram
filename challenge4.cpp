// Calculate GPA from a vector
// GPA = totalpoints / totalcredits
#include "record.h"
#include <iostream>
#include <string>
#include <vector>


using namespace std;

void initialize();

float GPA;
int id;
StudentRecords SR;
int main() {
    initialize();
    cout << "Enter a student id: "<< endl;

    cin >> id;

    SR.get_student_report(id);

}

// global function
void initialize() {


    SR.add_student(1, "Khaing Myat");
    SR.add_student(2, "Myat Thu");

    SR.add_course(1, "COMP1511", 5);
    SR.add_course(2, "COMP2511", 4);
    SR.add_course(3, "COMP9444", 5);
    SR.add_course(4, "COMP6080", 5);

    SR.add_grade(1, 3, 'A');
    SR.add_grade(1,2,'B');
    SR.add_grade(1,4,'A');
    SR.add_grade(2, 3, 'C'
                 );
    SR.add_grade(2,2,'D');
    SR.add_grade(2,2,'D');
}
