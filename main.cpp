#include <iostream>
#include <string>
#include <typeinfo>
#include <cstdint>
#include <cstring>
#include "cow.h"

using namespace std;


#define CAPACITY 5000
#define DEBUG

const int tes = 34;

auto a = 8;
auto b = 1233435465463;
auto c = 3.14f;
auto d = 3.14;
auto e = 'a';
auto f = true;

struct cow {
    string name;
    int age;
    unsigned char purpose;
};

int val = 37;
int *ptr;
c_cow *momo;

int main()
{
    string str;
    cout << "Hello human! Please enter your name: ";
    cin >> str;
    cout << "Hi " << str << endl;

    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
    cout << typeid(e).name() << endl;
    cout << typeid(f).name() << endl;
    cout << "testing const val " << tes << endl;

    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    cout << "[about to perform the additon]" << endl;
#endif // DEBUG
    large += small;
    cout << "The large integer is " << large << endl;

    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = dairy;
    cout << my_cow.name << " is a type " << (int)my_cow.purpose << " cow."<< endl;

    // class
    momo = new c_cow("Hildy", 7, pet);
    cout << (*momo).get_name() << " is a type " << (int)(*momo).get_purpose() << " cow."<< endl;
    cout << "MoMo is " << momo->get_age() << " years old."<< endl;

    momo->set_age(10);
    cout << "MoMo is now " << momo->get_age() << " years old."<< endl;
    delete momo;
    // Pointer
    ptr = &val;

    cout << "The content of val is "<< val<< endl;
    cout << "ptr is pointing to address " << ptr << endl;
    cout << "The address of val is "<< &val << endl;
    cout << "Where ptr is pointing, we have "<< *ptr << endl;   // dereference
    cout << "The address of ptr is "<< &ptr << endl;


    return 0;
}
