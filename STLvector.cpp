#include <string>
#include <iostream>
#include "cow.h"
#include <vector>
using namespace std;

vector <int> primes;

int main() {

    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(4);
    primes.push_back(5);
    primes.push_back(6);
    primes.push_back(2);

    cout << "The vector has "<< primes.size()<< " elements."<<endl;
    cout << "The element at index 2 is "<< primes[2]<<endl;
    primes[2] = 13;
    cout << "The element at index 2 is "<< primes[2]<<endl;

    vector<c_cow> cattle;
    cattle.push_back(c_cow("betty",6, pet));
    cattle.push_back(c_cow("libby",4, meat));
    cattle.push_back(c_cow("trudy",5, dairy));
    cattle.push_back(c_cow("besty",1, hide));

    // vector support iterator (iterator work like pointer
    cout << "The first cow is "<< cattle.begin()->get_name() << endl;
    cout << "At index 1 we have "<< cattle[1].get_name() << endl;
    cout <<"Next to last cow is "<< prev(cattle.end(), 2)-> get_name() << endl;
    cout << "The last cow is "<< (cattle.end()-1)->get_name() << endl;

    return (0);
}
