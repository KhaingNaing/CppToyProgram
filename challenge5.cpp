#include <iostream>
#include <fstream>

using namespace std;
void initialize();

void initialize(ifstream&);

ifstream inFile;
ofstream outFile;
int id;
StudentRecords SR;

int main() {
    initialize(inFile);         // initialize()
    Sr.report_file(outFile);    // SR.report_card(1, cout)
    return(0);

}

void initialize(ifstream& inFile) {
    string str, name;
    int sid, cid;
    unsigned char credits;
    char grade;
    int counter = 0

    inFile.open("students.txt"),
    if (inFile.fail()) {
        cout << "File students.txt not found" << endl;
    }
    else {
        while (!inFile.eof()) {
            getline(inFile, str);
            sid = stoi(str);

            getline(inFile, name);
            SR.add_student(sid, name);
            count++;
        }
        inFile.close();
        cout << "Found "<<counter<< " students"<<endl;
    }

}
