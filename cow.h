// telling the compiler to only include this header file once
#ifndef COW_H_INCLUDED
#define COW_H_INCLUDED
#include <string>

enum cow_purpose {dairy, meat, hide, pet};

class c_cow {
public:
    // constructor
    c_cow(std::string name_i, int age_i, unsigned char purpose_i);

    std::string get_name();
    int get_age();
    unsigned char get_purpose();

    void set_age(int new_age);

private:
    std::string name;
    int age;
    unsigned char purpose;
};

#endif // COW_H_INCLUDED
