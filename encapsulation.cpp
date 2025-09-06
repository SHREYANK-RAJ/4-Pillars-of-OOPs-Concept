#include <iostream>
using namespace std;

class Student {
private:
    // Private data members
    string studentName;
    int studentRollno;
    int studentAge;

public:
    // Getter & Setter for Student Name
    string getStudentName() {
        return studentName;
    }
    void setStudentName(string name) {
        this->studentName = name;
    }

    // Getter & Setter for Student Roll Number
    int getStudentRollno() {
        return studentRollno;
    }
    void setStudentRollno(int rollno) {
        this->studentRollno = rollno;
    }

    // Getter & Setter for Student Age
    int getStudentAge() {
        return studentAge;
    }
    void setStudentAge(int age) {
        this->studentAge = age;
    }

    // Utility function to display student details
    void displayInfo() {
        cout << "Student Name   : " << studentName << endl;
        cout << "Student RollNo : " << studentRollno << endl;
        cout << "Student Age    : " << studentAge << endl;
    }
};

int main() {
    // Create student object
    Student s1;

    // Setting values using setters
    s1.setStudentName("Rahul");
    s1.setStudentRollno(101);
    s1.setStudentAge(22);

    // Displaying values
    cout << "Student Details:" << endl;
    s1.displayInfo();

    return 0;
}
