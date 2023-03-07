#include <iostream>
#include <vector>
using namespace std;

int a = 1023;
bool flag = false;
char letter = 'd';

float operand1, operand2, result;
char operation;

vector<int> numbers = {12,25,31,47,58};
float average;
int main() {
    if (a > 1000) cout << "Warning a is over 1000." << endl;

    // false = 0
    if (a % 2 == 0)
        cout << "a is odd" << endl;
    else
        cout << "a is even" << endl;


    // while loop
    // iterator are defined within their classes (even generic classes)
    //vector<int>::iterator ptr = numbers.begin()
    auto ptr = numbers.begin();
    while (ptr != numbers.end()) {
        cout << *ptr << " ";
        ptr = next(ptr, 1);

    }
    cout << endl;

    // only when => sure it is safe to run the loop body the first time
    int i = 0;
    do {
        cout << numbers[i] << " ";
        i++;
    } while (i < numbers.size());

    cout << "do while loop counter is now "<< i << endl;

    // for loop (when you kown the range to tranverse)
    average = 0.0f;
    for (int i = 0; i < numbers.size(); i++) {
        average += numbers[i];
    }
    average /= numbers.size();
    cout << "Average : "<< average<< endl;

    average = 0.0f;
    // for loop another form
    // for x (current) element in numbers
    for(auto x : numbers) {
        average += x;
    }
    average /= numbers.size();
    cout << "Average : "<< average<< endl;


    cout << "Enter Operand 1: "<< endl;
    cin >> operand1;
    cout << "Enter Operand 2: "<< endl;
    cin >> operand2;
    cout << "Choose operation: * - + /"<< endl;
    cin >> operation;

    switch(operation) {
    case '+':
        result = operand1 + operand2;
        break;
    case '*':
        result = operand1 * operand2;
        break;
    case '-':
        result = operand1 - operand2;
        break;
    case '/':
        result = operand1 / operand2;
        break;
    }

    cout << "result is "<< result<< endl;
    return 0;
}
