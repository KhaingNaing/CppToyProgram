#include "record.h"
#include <iostream>
/* student */
// constructor
Student::Student(int sid, std::string sname){
    id = sid;
    name = sname;
}

// get functions
int Student::get_id() {
    return id;
}
std::string Student::get_name() {
    return name;
}

/* course */
// constructor
Course::Course(int cid, std::string cname, unsigned char ccredits){
    id = cid;
    name = cname;
    credits = ccredits;
}

// get functions
int Course::get_id() {
    return id;
}
std::string Course::get_name(){
    return name;
}
unsigned char Course::get_credits() {
    return credits;
}

// set
void Course::set_credits(unsigned char ccredits) {
    credits = ccredits;
}

/* grade */
// constructor
Grade::Grade(int sid, int cid, char grd) {
    student_id = sid;
    course_id = cid;
    grade = grd;
}

// get functions
int Grade::get_student_id() {
    return student_id;
}
int Grade::get_course_id() {
    return course_id;
}
char Grade::get_grade() {
    return grade;
}

// Records
void StudentRecords::add_student(int sid, std::string sname){
    students.push_back(Student(sid, sname));
}
void StudentRecords::add_course(int cid, std::string cname, unsigned char ccredits){
    courses.push_back(Course(cid, cname, ccredits));
}
void StudentRecords::add_grade(int sid, int cid, char grd){
    grades.push_back(Grade(sid, cid, grd));
}

float StudentRecords::get_num_grade(char letter){
    float num_grd;
    switch(letter) {
    case 'A': num_grd = 4.0f;
        break;
    case 'B': num_grd = 3.0f;
        break;
    case 'C': num_grd = 2.0f;
        break;
    case 'D': num_grd = 1.0f;
        break;
    default : num_grd = 0.0f;
        break;
    }
    return num_grd;
}

std::string StudentRecords::get_student_name(int sid){

    std::string student_name;
    int i = 0;
    while (i < students.size() && students[i].get_id() != sid) {
        i++;
    }
    student_name = students[i].get_name();

    return student_name;
}

std::string StudentRecords::get_course_name(int cid){

    int i = 0;
    while (i < courses.size() && courses[i].get_id() != cid) {
        i++;
    }

    return courses[i].get_name();
}

unsigned char StudentRecords::get_course_credit(int cid) {
    int i = 0;
    while (i < courses.size() && courses[i].get_id() != cid)
        i++;
    return courses[i].get_credits();
}

float StudentRecords::get_GPA(int sid) {
    float points = 0.0f, credits = 0.0f;

    for (auto grd : grades) {
        if (grd.get_student_id() == sid) {
            // convert grd to num
            // calculate total grd * credits
            // calculate total points / total credits

        }

    }
    return points/credits;
}

void StudentRecords::get_student_report(int sid) {
    std::cout << "Report card for student " << get_student_name(sid) << std::endl;
    float points = 0.0f, credits = 0.0f;

    for (auto grd : grades) {
        if (grd.get_student_id() == sid) {
            int cid = grd.get_course_id();
            std::cout << "Course: " << get_course_name(cid) << ", Grade: " << grd.get_grade() << std::endl;

            points += get_num_grade(grd.get_grade()) * get_course_credit(cid);
            credits += get_course_credit(cid);
        }
    }
    std::cout << "GPA: " << points/credits << std::endl;
}
