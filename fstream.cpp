// Open a text file for reading

#include <iostream>
#include <fstream>

// ifstream similar to cin
ifstream inFile;

// ofstream similar to cout
ofstream outFile;
string str;
int num;
char letter;

int main() {
    inFile.open("people.txt");
    // if open file fail?
    if (inFile.fail()) {
        cout << endl << "File not found!" << endl;
    }
    else {
        // while not end of file
        while (!inFile.eof()) {
            getline(inFile, str);
            cout << str << endl;
        }
        inFile.close();
    }

    outFile.open("calculation.txt");
    if (outFile.fail()) {
        cout << endl << "File cannot be opened!" << endl;
    }
    else {
        outFile << "a = " << 4 << endl;
        outFile << "b = " << 5 << endl;
        outFile << "a + b = " << 4+5 << endl;
        outFile << "a * b = " << 4*5<< endl;

        outFile.close();
    }

    return 0;
}
