#ifndef RECORD_H_INCLUDED
#define RECORD_H_INCLUDED
#include <string>
#include <vector>

enum grade_score {A, B, C, D, F};

class Student{
    private:
        int id;
        std::string name;
    public:
        // constructor
        Student(int sid, std::string sname);

        // get functions
        int get_id();
        std::string get_name();
};

class Course{
    private:
        int id;
        std::string name;
        unsigned char credits;
    public:
        // constructor
        Course(int cid, std::string cname, unsigned char ccredits);

        // get functions
        int get_id();
        std::string get_name();
        unsigned char get_credits();

        // set
        void set_credits(unsigned char ccredits);
};

class Grade{
    private:
        int student_id;
        int course_id;
        char grade;

    public:
        Grade(int sid, int cid, char grd);
        int get_student_id();
        int get_course_id();
        char get_grade();
};

class StudentRecords {
    private:
        std::vector<Student> students;
        std::vector<Course> courses;
        std::vector<Grade> grades;

        float get_num_grade(char);
    public:
        void add_student(int, std::string);
        void add_course(int, std::string, unsigned char);
        void add_grade(int, int, char);

        std::string get_student_name(int);
        std::string get_course_name(int);
        unsigned char get_course_credit(int);
        float get_GPA(int);
        void get_student_report(int);
};

#endif // RECORD_H_INCLUDED
