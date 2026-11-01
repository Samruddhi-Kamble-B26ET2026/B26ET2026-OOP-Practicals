#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream source("source.txt");
    ofstream destination("destination.txt");

    if (!source.is_open()) {
        cout << "Error opening source file!" << endl;
        return 1;
    }
    if (!destination.is_open()) {
        cout << "Error opening destination file!" << endl;
        return 1;
    }
    destination << source.rdbuf();
    cout << "File copied successfully!" << endl;
    source.close();
    destination.close();
    return 0;
}
