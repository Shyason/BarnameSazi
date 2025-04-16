#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string FirstName;
    string LastName;

public:
    Person(string firstname, string lastname)
        : FirstName(firstname), LastName(lastname) {}

    void showInfo() {
        cout << "Name: " << FirstName << " " << LastName << endl;
    }
};

class Student : public Person {
private:
    float Grade;

public:
    Student(string firstname, string lastname, float grade)
        : Person(firstname, lastname), Grade(grade) {}

    void showStudentInfo() {
        showInfo();
        cout << "Grade: " << Grade << endl;
    }

    float getGrade() {
        return Grade;
    }
};

class Teacher : public Person {
private:
    float Salary;

public:
    Teacher(string firstname, string lastname, float salary)
        : Person(firstname, lastname), Salary(salary) {}

    void showTeacherInfo() {
        showInfo();
        cout << "Salary: " << Salary << endl;
    }
};

float calculateAverageGrade(Student students[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += students[i].getGrade();
    }
    return sum / size;
}

int main() {
    Student students[3] = {
        Student("LeBron", "James", 18.5),
        Student("Bronny", "James", 17.0),
        Student("Stephen", "Curry", 19.2)
    };

    Teacher teacher("Michael", "Jordan", 25000000);

    cout << "All Student Info:\n";
    for (int i = 0; i < 3; i++) {
        students[i].showStudentInfo();
        cout << "---------------------\n";
    }

    cout << "Average Grade of Students: " << calculateAverageGrade(students, 3) << endl;

    cout << "\nTeacher Info:\n";
    teacher.showTeacherInfo();

    return 0;
}