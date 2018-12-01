#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {

    int x;
    int sum = 0;

    ifstream inFile;
    inFile.open("input.txt");
    if(!inFile) {
        cout << "Could not open file.";
        exit(1);
    }

    while(inFile >> x) {
        sum += x;
    }
    cout << sum << endl;
    return 0;
}
