
#include <iostream>
#include <string>
using namespace std;

class BasicInfo {
protected:
    int id;
    string name;
    int age;

public:
    void acceptBasicInfo() {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
    }
};

class DepartmentInfo {
protected:
    string department;
    string designation;

public:
    void acceptDepartmentInfo() {
        cout << "Enter Department: ";
        cin.ignore();
        getline(cin, department);

        cout << "Enter Designation: ";
        getline(cin, designation);
    }
};

class Employee : public BasicInfo, public DepartmentInfo {
public:
    void accept() {
        acceptBasicInfo();
        acceptDepartmentInfo();
    }

    void display() {
        cout << "\n--- Employee Information ---" << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
        cout << "Designation: " << designation << endl;
    }
};

int main() {
    Employee e;

    e.accept();
    e.display();

    return 0;
}
