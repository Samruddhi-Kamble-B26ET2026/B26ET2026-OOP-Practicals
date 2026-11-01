
#include <iostream>
#include <cstring>
using namespace std;

class String {
    char *str;

public:
    String() {
        str = new char[1];
        str[0] = '\0';
    }

    String(const char *s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    String(const String &s) {
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }

    void accept() {
        char temp[100];
        cout << "Enter a string: ";
        cin.getline(temp, 100);

        delete[] str;
        str = new char[strlen(temp) + 1];
        strcpy(str, temp);
    }

    void display() {
        cout << str << endl;
    }

    ~String() {
        delete[] str;
    }
};

int main() {
    String s1;

    s1.accept();

    cout << "Original String: ";
    s1.display();

    String s2(s1);

    cout << "Copied String: ";
    s2.display();

    return 0;
}
