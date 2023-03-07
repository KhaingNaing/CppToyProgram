#include "record.h"
#include <iostream>
#include <string>
#include <typeinfo>
#include <cstdint>
#include <cstring>
#include <vector>

using namespace std;

int main() {
    Student mystudent(1, "khaing");
    Course mycourse(1, "computer", 80);
    Grade mygrade(1, 1, 'A');

    cout << "Student: " << mystudent.get_name() << endl;
	cout << "Course: " << mycourse.get_name() << endl;
	cout << "Credits: " << mycourse.get_credits() << endl;
	cout << "Grade: " << mygrade.get_grade() << endl;
}
