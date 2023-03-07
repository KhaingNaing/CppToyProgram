// learning cpp
// calculate an average: by Khaing
#include <iostream>

using namespace std;

#define ARRAY_LENGTH 5

int array[ARRAY_LENGTH] = {1,2,3,4,32};

int main() {
    float avg;
    int sum = 0;
    for(int i = 0; i < ARRAY_LENGTH; i++) {
        sum += array[i];
    }
    avg = (float)sum / (float)ARRAY_LENGTH;
    cout << "sum = " << sum << endl;

    cout << "average = " << avg << endl;
    return 0;
}
