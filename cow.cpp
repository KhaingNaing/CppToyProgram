#include "cow.h"

// constructor
c_cow::c_cow(std::string name_i, int age_i, unsigned char purpose_i) {
    name = name_i;
    age = age_i;
    purpose = purpose_i;
}

std::string c_cow::get_name() {
    return name;
}
int c_cow::get_age() {
    return age;
}
unsigned char c_cow::get_purpose() {
    return purpose;
}

void c_cow::set_age(int new_age) {
    age = new_age;
}
