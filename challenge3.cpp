// Calculate GPA from a vector
// GPA = totalpoints / totalcredits
#include "record.h"
#include <iostream>
#include <string>
#include <vector>


using namespace std;

void initialize();
vector<Student> students = {Student(1, "Khaing Myat"),
                            Student(2, "Myat Thu")};

vector<Course> courses = {Course(1, "COMP1511", 5),
                          Course(2, "COMP2511", 4),
                          Course(3, "COMP9444", 5),
                          Course(4, "COMP6080", 5)};
vector<Grade> grades = {Grade(1, 3, 'A'),Grade(1,2,'B'), Grade(1,4,'A'),
                        Grade(2, 3, 'C'),Grade(2,2,'D'), Grade(2,4,'A')};

float GPA;
int id;
StudentRecords SR;
int main() {
    initialize();
    cout << "Enter a student id: "<< endl;

    cin >> id;

    string student_str = SR.get_student_name(id);

    cout << "Student "<<student_str<< " GPA is "<< SR.get_GPA(id) <<endl;

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
